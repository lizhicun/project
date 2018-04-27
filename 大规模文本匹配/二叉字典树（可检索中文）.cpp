/*************************************************************************
	> File Name:Hao Xing Qing~ 检索公司1.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月09日 星期五 20时51分19秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
    int flag;
    struct Node *lchild, *rchild;
}Node;

Node *init_node() {
    Node *p = (Node *)malloc(sizeof(Node) * 1);
    p->flag = 0;
    p->lchild = p->rchild = NULL;
    return p;
}

Node *insert(Node *tree, char *str) {
    Node *p = tree;
    while(str[0]) {
        for(int i = 0; i < 8; i++) {
            if(1 << i & str[0]) {
                if(p->lchild == NULL) {
                    p->lchild = init_node();
                }
                p = p->lchild;
            } else {
                if(p->rchild == NULL) {
                    p->rchild = init_node();
                }
                p = p->rchild;
            }
        }
        str++;
    }
    p->flag = 1;
    return tree;
}

int find_str(Node *root, char *target) {
    Node *p = root;
    while(target[0]) {
        for(int i = 0; i < 8; i++) {
            if(1 << i & target[0]) {
                if(p->lchild == NULL) return 0;
                p = p->lchild;
            } else {
                if(p->rchild == NULL) return 0;
                p = p->rchild;
            }
        }
        target++;
    }
    if(p->flag == 0) return 0;
    return 1;
}
//存在问题，读到文本末尾会插入空字符串
int main() {
    int n, m;
    Node *root = init_node();
    char *str = (char *)malloc(sizeof(char) * 1024);
    char *buffer = (char *)malloc(sizeof(char) * 1024);
    memset(buffer, 0, sizeof(buffer));
    memset(str, 0, sizeof(str));

    FILE *fp = fopen("company.txt", "r");
    while(!feof(fp)) {
        fscanf(fp, "%s", buffer);
        root = insert(root, buffer);
        printf("insert %s\n", buffer);
        memset(buffer, 0, sizeof(buffer));
    }
    FILE *fp_search = fopen("test", "r");
    while(!feof(fp_search)) {
        fscanf(fp_search, "%s", str);
        printf("find result = %d\n", find_str(root, str));
        memset(str, 0, sizeof(str));
    }
    /*
    printf("输入字典中的单词个数：\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("%d :", i + 1);
        scanf("%s", str);
        root = insert(root, str);
        memset(str, 0, sizeof(str));
    }
    printf("输入待查询单词的个数：\n");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        printf("%d :", i + 1);
        scanf("%s", str);
        printf("find result = %d\n", find_str(root, str));
        memset(str, 0, sizeof(str));
    }*/
    fclose(fp);
    free(str);
    free(buffer);
    return 0;
}
