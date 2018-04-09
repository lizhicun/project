/*************************************************************************
	> File Name:Hao Xing Qing~ client.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月09日 星期五 18时48分28秒
 ************************************************************************/
 #include"heah.h"

#define DBG(format, a...) { \
    printf(format, ##a); \
    printf("\n"); \
}

 int command_sock_connect(int port, char *addr) {
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
 
 int short_sock_create(int port) {
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
void save_file(int num, char *buffer, char *file_type) {
    char path[20];
    sprintf(path, "%d", num);
    strcat(path, "/");
    strcat(path, file_type);
    FILE *fp = fopen(path, "a+");
    fwrite(buffer, sizeof(char), strlen(buffer), fp);
    printf("正在保存%s至%s\n", buffer, path);
    fclose(fp);
    return ;
}

int recv_file(int num, int server_listen, char *file_type) {
    int sockfd, pid;
    struct sockaddr_in client_addr;
    socklen_t len = sizeof(client_addr);
    while(1) {
        sockfd = accept(server_listen, (struct sockaddr *)&client_addr, &len);
            char *buffer = (char *)malloc(sizeof(char) * 1024);
            memset(buffer, 0, sizeof(char) * 1024);
            while(recv(sockfd, buffer, 1024, 0) > 0) {
                save_file(num, buffer, file_type);
                memset(buffer, 0, sizeof(buffer));
                sleep(2);
            }
            close(sockfd);
            free(buffer);
            break;
        }
        close(sockfd);
    return 0;
}

 int handle_command(int num, int sockfd, char *command, int server_listen) {
     char *buffer = (char *)malloc(sizeof(char) * 30);
     memset(buffer, 0, sizeof(buffer));
     char file_type[5];
     memset(file_type, 0, sizeof(file_type));
     if(strcmp(command, "404") == 0) {
        printf("无法查看cpu.log文件！\n\n");
        return 0;
     } else if(strcmp(command, "200") == 0) {
        /*建立短连接用于接收文件,端口是2018*/
         strcpy(buffer, "300");
         send(sockfd, buffer, sizeof(buffer), 0);
         strcpy(file_type, "cpu");
         recv_file(num, server_listen, file_type);
         return 0;
     } else if(strcmp(command, "405") == 0) {
         printf("无法查看memory.log文件！\n\n");
         return 0;
     } else if(strcmp(command, "201") == 0) {
         strcpy(buffer, "301");
         send(sockfd, buffer, sizeof(buffer), 0);
         strcpy(file_type, "mem");
         recv_file(num, server_listen, file_type);
         } else if(strcmp(command, "406") == 0) {
         printf("无法查看disk.log文件！\n");
         return 0;
     } else if(strcmp(command, "202") == 0) {
         strcpy(buffer, "302");
         send(sockfd, buffer, sizeof(buffer), 0);
         strcpy(file_type, "disk");
         recv_file(num, server_listen, file_type);
     } else if(strcmp(command, "203") == 0) {
         strcpy(buffer, "303");
         send(sockfd, buffer, sizeof(buffer), 0);
         strcpy(file_type, "user");
         recv_file(num, server_listen, file_type);
     }
     else {
         printf("错误的命令\n\n");
     }
     return 0;
 }

 void recv_command(int num, int sockfd, int server_listen) {
     char *buffer = (char *)malloc(sizeof(char) * 30);
     memset(buffer, 0, sizeof(buffer));
     while(recv(sockfd, buffer, 30, 0) > 0) {
         printf("接收到客户端请求:%s\n", buffer);
         if(!handle_command(num, sockfd, buffer, server_listen)) {
             break;}
         memset(buffer, 0, sizeof(buffer));
     }
     free(buffer);
     fflush(stdout);
     return ;
 }
 void send_command(int num, int sockfd, int server_listen) {
    printf("命令集：\n查看CPU：100\n查看MEM：101\n查看DISK：102\n");
    char *command = (char *)malloc(sizeof(char) * 10);
    memset(command, 0, sizeof(command));
    FILE *fp = fopen("command", "r");
    while(~fscanf(fp, "%s", command) != EOF) {
        printf("发送命令:%s\n", command);
        send(sockfd, command, strlen(command), 0);
        sleep(1);
        recv_command(num, sockfd, server_listen);
        sleep(1);
    }
    free(command);
    return ;
 }

void *match(char *str, char *ans) {
    char buffer[30];
    int flag = 0;
    FILE *fp = fopen("match.ini", "r");
    while(fgets(buffer, 1024, fp) != NULL) {
        int i;
        for( i = 0; str[i]; i++) {
            if(str[i] != buffer[i]) {
                flag = 0;
                break;
            }
            flag = 1;
        }
        i++;
        if(flag) {
            strcpy(ans, buffer + i);
            break;
        }
    }
}

void init_process(int num, int sockfd, int server_listen) {
    printf("与num:%d客户端建立连接\n", num);
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    FILE *fp = fopen("command", "r");
    while(fgets(buffer, 100, fp) != NULL) {
        send(sockfd, buffer, strlen(buffer), 0);
        recv_command(num, sockfd, server_listen);
        memset(buffer, 0, sizeof(buffer));
    }
    fclose(fp);
    close(sockfd);
}

void create_process(int server_listen,int port) {
    int arr_process[10], pid, i = 0;
    char host[10][20];
    FILE *fp = fopen("host.ini", "r");
    while(~fscanf(fp, "%s", host[i])) {
        printf("%s", host[i]);
        arr_process[i] = command_sock_connect(port, host[i]);
    }
    for(int i = 1; i <= 10; i++) {
        if((pid = fork()) == 0) {
            init_process(i, arr_process[i], server_listen);
            break;
        }
    }
    if(pid != 0) { // ???
        exit(0);
    }
    return ;
}

int main() {
    int sockfd, pid, i;
    int port = 8069;
    char addr[20];
    char buffer[100];
    int server_listen = short_sock_create(2018);
    printf("\n");
    //create_process(server_listen, port);
    for(i = 1; i <= 3; i++) {
        if((pid = fork()) == 0) {
            break;
        } else {
            printf("fork() error\n");
        }
    }
    if(pid != 0) {
        exit(0);
    }
    if(i == 1) {
        strcpy(addr, "192.168.1.40");
        if((sockfd = command_sock_connect(port, addr)) < 0) {
            printf("command_sock_connect() error");
            return -1;
        } else {
            FILE *fp = fopen("command", "r");
            printf("客户端%d连接成功!\n", i);
            while(fgets(buffer, 100, fp) != NULL) {
                printf("发送命令%s\n", buffer);
                send(sockfd, buffer, strlen(buffer), 0);
                recv_command(i, sockfd, server_listen);
                memset(buffer, 0, sizeof(buffer));
            }
    fclose(fp);
        } 
    } else if(i == 2) {
        strcpy(addr, "192.168.1.41");
        if((sockfd = command_sock_connect(port, addr)) < 0) {
            printf("command_sock_connect() error");
            return -1;
        } else {
            printf("客户端%d连接成功\n", i);
            FILE *fp = fopen("command", "r");
            while(fgets(buffer, 100, fp) != NULL) {
                printf("发送命令%s\n", buffer);
                send(sockfd, buffer, strlen(buffer), 0);
                recv_command(i, sockfd, server_listen);
                memset(buffer, 0, sizeof(buffer));
            }
    fclose(fp);
        }
    } else if(i == 3) {
        strcpy(addr, "192.168.1.42");
        if((sockfd = command_sock_connect(port, addr)) < 0) {
            printf("command_sock_connect() error");
            return -1;
        } else {
            printf("客户端%d连接成功\n", i);
            FILE *fp = fopen("command", "r");
            while(fgets(buffer, 100, fp) != NULL) {
                printf("buffer = %s\n", buffer);
                send(sockfd, buffer, strlen(buffer), 0);
                recv_command(i, sockfd, server_listen);
                memset(buffer, 0, sizeof(buffer));
            }
    fclose(fp);
        }
    }else if(i == 4) {
        strcpy(addr, "192.168.1.43");
        if((sockfd = command_sock_connect(port, addr)) < 0) {
            printf("command_sock_connect() error");
            return -1;
        } else {
            printf("connect to pi%d\n", i);
            FILE *fp = fopen("command", "r");
            while(fgets(buffer, 100, fp) != NULL) {
                send(sockfd, buffer, strlen(buffer), 0);
                recv_command(i, sockfd, server_listen);
                memset(buffer, 0, sizeof(buffer));
            }
    fclose(fp);
        }
    close(sockfd);
    }
}
