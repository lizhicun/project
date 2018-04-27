/*************************************************************************
	> File Name:Hao Xing Qing~ 检索公司2.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月10日 星期六 14时20分16秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
    char data;
    struct Node *child;
    struct Node *brother;
    int num;
}Node;

Node *NewNode(char data) {
    Node *p = (Node *)malloc(sizeof(Node) * 1);
    p->data = data;
    p->num = 0;
    p->child = p->brother = NULL;
    return p;
}

Node *getNewNode(Node **tree, int count, char data) {
    Node *p = (Node *)malloc(sizeof(Node) * 1);
    p->data = data;
    p->num = count;
    p->child = p->brother = NULL;
    tree[count] = p;
    return tree[count];
}

void clear(Node *p) {

}

int insert(Node **tree, int count, char *str) {
    Node *p = tree[0];
    int i = 0;
    Node *r = NewNode('1');
    while(str[0]) {
        Node *ancestor = tree[i];
        if(tree[i]->child == NULL) {
            printf("str[0] = %c,p->child == NULL\n", str[0]);
            tree[i]->child = getNewNode(tree, count, str[0]);
            i = count;
            count++;
            str++;
            continue;
        } else {/*
            p = p->child;
            r->brother = p;//p是头孩子，r是头孩子前的虚拟节点*/
            i = tree[i]->child->num;
            r->brother = tree[i];
        }
        //Node *first_child = p;
        Node *first_child = tree[i];
        /*while(str[0] > p->data && p->brother != NULL) {
            p = p->brother;
            r = r->brother;
        }*/
        while(str[0] > tree[i]->data && tree[i]->brother != NULL) {
            i = tree[i]->brother->num;
            r = r->brother;
        }

        /*if(str[0]:== p->data) {
            printf("str[0] = p->data\n");
            str++;
            continue;
        } */
        if(str[0] == tree[i]->data) {
            printf("str[0] = %c,str[0] = tree[i]->data\n", str[0]);
            str++;
            continue;
        }
        /*
        else if(str[0] < p->data) {
            Node *q = getNewNode(str[0]);
            q->data = str[0];
            q->brother = p;
            r->brother = q;
            tree[count] = q;
            tree[count]->num = count;
            count++;
            if(p == first_child) {
                ancestor->child = q;
                p = q;
                printf("change first_child\n");
            }*/
        else if(str[0] < tree[i]->data) {
            tree[count] = getNewNode(tree, count, str[0]);
            r->brother = tree[count];
            tree[count]->brother = tree[i];
            if(tree[i] == first_child) {
                ancestor->child = tree[count];
            }
            i = count;
            count++;
        }

       /* } else if(p->brother == NULL) {
            p->brother = getNewNode(str[0]);
            p->brother->num = count;
            //tree[p->num]->brother = getNewNode(str[0]);
            tree[count] = p->brother;
            tree[count]->num = count;
            count++;
            p = p->brother;
        }*/
        else if(tree[i]->brother == NULL) {
            tree[i]->brother = getNewNode(tree, count, str[0]);
            i = count;
            count++;
        }
        str++;
    }
    printf("end\n");
    return count;
}
void print_tree(Node **tree) {
    for(int i = 1; tree[i] != NULL; i++) {
        printf("print :tree[%d]->data = %c\n", i, tree[i]->data);
        printf("print :tree[%d]->count = %d\n", i, tree[i]->num);
    }
    /*for(int i = 1; tree[i] != NULL; i++) {
        if(tree[i]->brother == NULL) printf("no brother");
        printf("print :tree[%d]->brother = %c\n", i, tree[i]->brother->data); 
    }*/
    if(tree[11]->brother == NULL) printf("error");
    printf("tree[11]->brother = %c\n", tree[2]->brother->data);
    return ;
}

void trans_level(Node **tree) {
    for(int i = 2; tree[i] != NULL; i++) {
        if(tree[i - 1]->brother);
    }
}

int main() {
    int n, count = 1;
    Node **tree = (Node **)malloc(sizeof(Node *) * 100);
    tree[0] = NewNode('R');
    char *buffer = (char *)malloc(sizeof(char) * 10);
    memset(buffer, 0, sizeof(buffer));
    printf("请输入插入的字母个数:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", buffer);
        count = insert(tree, count, buffer);
        memset(buffer, 0, sizeof(buffer));
    }
    //print_tree(tree);
    return 0;
}
