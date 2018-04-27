/*************************************************************************
	> File Name:Hao Xing Qing~ client.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月09日 星期五 19时08分56秒
 ************************************************************************/
#include"heah.h"
int recv_command_socket_create(int port) {
    int sockfd, yes;
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0 ) {
        perror("socket() error\n");
        return -1;     
             
    }
    if(setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes)) < 0) {
        perror("setsockopt() error\n");
        close(sockfd);
        return -1;              
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    if(bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0 ) {
        perror("bind() error\n");
        close(sockfd);
        return -1;                  
    }
    if(listen(sockfd, 20) < 0) {
        perror("listen() error\n");
        close(sockfd);
        return -1;                  
    }
    return sockfd;
}
int short_sock_connect(int port, char *addr) {
        int sockfd;
         struct sockaddr_in server_addr;
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
                perror("socket() error\n");
                return -1;           
             
    }
        server_addr.sin_family = AF_INET;
        server_addr.sin_port = htons(port);
        server_addr.sin_addr.s_addr = inet_addr(addr);
    if(connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
                perror("command_sock connect() error\n");
                close(sockfd);
                return -1;        
             
    }
        return sockfd;
     
}



 int send_file(const char *file_name) {
     /*char addr2[20];
     //int port = match(port1);
     int port = 2018;
     int sockfd;
     char *addr = match(addr2);
     printf("adddr = %s\n", addr);*/
     int sockfd, port = 2018;
     char addr[20] = "192.168.1.198";
     if((sockfd = short_sock_connect(port, addr)) < 0) {
         printf("short_sock_create() error\n");
         return 0;
     }
     FILE *fp = fopen(file_name, "r");
     char *buffer = (char *)malloc(sizeof(char) * 1024);
     memset(buffer, 0, sizeof(buffer));
     while(fgets(buffer, 1024, fp) != NULL) {
         printf("buffer = %s\n", buffer);
         send(sockfd, buffer, strlen(buffer) + 1, 0);
         memset(buffer, 0, sizeof(buffer));
         sleep(1);
     }
     free(buffer);
     fclose(fp);
     close(sockfd);
     return 1;
 }

 void handle_ask(int sockfd, char *buffer) {
     char *answer = (char *)malloc(sizeof(char) * 30);
     memset(answer, 0, sizeof(answer));
     if(strncmp(buffer, "100", 3) == 0) {
         printf("buffer = 100\n");
         if(access("Cpu.Log", 0) == 0) {
            strcpy(answer, "200");}
         else {
            strcpy(answer, "404");}
         printf("客户端响应：%s\n", answer);
         fflush(stdout);

         send(sockfd, answer, strlen(answer), 0);
     } else if(strncmp(buffer, "300", 3) == 0) {
         printf("send_file\n");
         send_file("Cpu.Log");
     } else if(strncmp(buffer, "101", 3) == 0) {
         if(access("mem.log", 0) == 0)
            strcpy(answer, "201");
         else
            strcpy(answer, "405");
         printf("客户端响应：%s\n", answer);
         send(sockfd, answer, strlen(answer), 0);
     } else if(strncmp(buffer, "301", 3) == 0) {
         send_file("mem.log");
     } else if(strncmp(buffer, "102", 3) == 0) {
         if(access("disk.log", 0) == 0) 
             strcpy(answer, "202");
         else 
            strcpy(answer, "406");
         printf("客户端响应：%s\n", answer);
         send(sockfd, answer, strlen(answer), 0);
     } else if(strncmp(buffer, "302", 3) == 0) {
         send_file("disk.log");
     } else if(strncmp(buffer, "103", 3) == 0) {
         if(access("tty.log", 0) == 0)
            strcpy(answer, "203");
         else
            strcpy(answer, "407");
         printf("客户端响应：%s\n", answer);
         send(sockfd, answer, strlen(answer), 0);
     }
     else {
         printf("error");
         sleep(1);
     }
     free(answer);
 }
 
 void update_log(const char *command, const char *file_name) {
     char *buffer = (char *)calloc(10240, sizeof(char));
     for(int i = 0; i < 12; i++) {
         FILE *fp = popen(command, "r");
         char temp[1000] = {0};
         fread(temp, sizeof(char), sizeof(temp), fp);
         printf("%s\n", temp);
         strcat(buffer, temp);
         memset(temp, 0, sizeof(temp));
         sleep(5);
     }
     FILE *fin = fopen(file_name, "w");  

     flock(fin->_fileno, LOCK_EX);
     fwrite(buffer, sizeof(char), strlen(buffer), fin);
     fclose(fin);
     flock(fin->_fileno, LOCK_EX);
     printf("%s完成更新！\n", file_name);
     return ;
 }
 int file_empty(const char *file_name) {
     FILE *fp;
     if((fp = fopen("file_name", "r")) == NULL) {
         return 1;
     }
     return 0;
 }
 int main(int argc, char *argv[]) {
    int server_listen, port, sockfd, pid1, pid2;
     port = 8069;
    if((server_listen = recv_command_socket_create(port)) < 0) {
        perror("socket_create() error\n");
        return 0;       
    }
    struct sockaddr_in client_addr;
    socklen_t len = sizeof(client_addr);
    while(1) {
         if((pid1 = fork()) == 0) {
             int pid11, pid12, pid13, pid14;
             if((pid11 = fork()) == 0) {
                update_log("bash cpu.sh", "Cpu.Log");
                 if(!file_empty("Warn.log")) {
                     printf("错误：内存报警!\n");
                 }
             } else if((pid12 = fork()) == 0){
                update_log("bash mem.sh 0.3", "mem.log");
             } else if((pid13 = fork()) == 0){
                update_log("bash disk.sh", "disk.log");
             } else if((pid14 = fork()) == 0){
                 update_log("bash user.sh", "user.log");
             }
             exit(0);
         } else {
            if((pid2 = fork()) == 0) { 
                sockfd = accept(server_listen, (struct sockaddr *)&client_addr, &len);
            char server_add[50];
            int server_port;
            getpeername(sockfd, (struct sockaddr *)&client_addr, &len);
            inet_ntop(AF_INET, (void *)&client_addr.sin_addr, server_add, 49);
            server_port = ntohs(client_addr.sin_port);
            printf("服务器：\n");
            printf("       IP地址 = %s\n", server_add);
            printf("       端口号 = %d\n\n\n", server_port);
            char *ask = (char *)malloc(sizeof(char) * 100);
             while(recv(sockfd, ask, 100, 0) > 0 && ask[0]) {
                printf("服务器端请求：%s", ask);
                handle_ask(sockfd, ask); 
                 memset(ask, 0, sizeof(ask));
             }
             close(sockfd);
             free(ask);
             exit(0);
         }
        close(sockfd);
        exit(0);
    }
     close(server_listen);
    }
 }
