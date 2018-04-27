/*************************************************************************
	> File Name:Hao Xing Qing~ 哈夫曼编码.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月20日 星期二 13时36分09秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define swap(a, b) { \
    __typeof(a) __a = a; \
    a = b; \
    b = __a; \
}

typedef struct Node{
    unsigned char data;
    int freq;
    struct Node *lchild, *rchild;
}Node;

typedef struct binary_Node{
    int flag;
    struct binary_Node *lchild, *rchild;
}binary_Node;

binary_Node *init_node() {
    binary_Node *p = (binary_Node *)malloc(sizeof(binary_Node) * 1);
    p->flag = 0;
    p->lchild = p->rchild = NULL;
    return p;
}

binary_Node *insert(binary_Node *root, char *str, int n) {
    printf("insert : %s\n", str);
    binary_Node *p = root;
    int i = 0;
    while(str[i]) {
        if(str[i] == 1) {
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
        i++;
    }
    p->flag = n;
    return root;
}

int search(binary_Node *root, char *str, int n) {
    printf("search %s\n", str);
    binary_Node *p = root;
    int i = 0;
    while(str[i] && p) {
        printf("str[%d] = %c", i, str[i]);
        if(str[i] == 1) {
            if(p->lchild == NULL) return 0;
            p = p->lchild;
            printf("p->lchild->flag = %d\n", p->flag);
        } else {
            if(p->rchild == NULL) return 0;
            p = p->rchild;
            printf("p->rchild->flag = %d\n", p->flag);
        }
        i++;
    }
    return p && p->flag == n;
}


typedef struct Half {
    unsigned char data;
    char encode[100];
}Half;

Half **init_half() {
    Half **h = (Half **)malloc(sizeof(Half *) * 1);
    for(int i = 0; i < 256; i++) {
        h[i] = (Half *)malloc(sizeof(Half) * 1);
        h[i]->data = '\0';
        memset(h[i]->encode, 0, 100);
    }
    return h;
}

Node **init(int n) {
    Node **half = (Node **)malloc(sizeof(Node *) * n);
    for(int i = 0; i < n; i++) {
        half[i] = (Node *)malloc(sizeof(Node) * 1);
        half[i]->freq = 0;
        half[i]->lchild = half[i]->rchild = NULL;
    }
    return half;
}

void clear_half(Node **half) {
    free(half);
    return ;
}

Node *built_half_tree(Node **half, int cnt) {
    #define hswap(x, y) { \
        swap(half[x], half[y]); \
    }
    int ind1 = cnt - 1, ind2 = ind1 - 1;
    Node *temp;
    while(ind2 >= 0) {
        if(half[ind1]->freq > half[ind2]->freq) hswap(ind1, ind2);
        for(int i = 0; i < ind2; i++) {
            if(half[i]->freq < half[ind1]->freq) {
                hswap(ind1, i);
                hswap(i, ind2);
            }
            else if(half[i]->freq < half[ind2]->freq) {
                hswap(ind2, i);
            }
        }
        temp = (Node *)malloc(sizeof(Node) * 1);//!!!!!检查了很久
        temp->data = 0;
        temp->lchild = half[ind1];
        temp->rchild = half[ind2];
        temp->freq = half[ind1]->freq + half[ind2]->freq;
        half[ind2] = temp;
        ind1 = ind2, ind2 = ind1 - 1;
        }
    return temp;
}
/*有疑问*/
void output(Node *root, int k, char *Encode, Half **h) {
    if(root == NULL) return ;
    if(root->lchild == NULL) {
        Encode[k] = '\0';
        h[root->data]->data = root->data;
        strcpy(h[root->data]->encode, Encode);
        return ;
    }
    Encode[k] = '0';
    output(root->lchild, k + 1, Encode, h);
    Encode[k] = '1';
    output(root->rchild, k + 1, Encode, h);
    return ;
}

int main() {
    FILE *fp = fopen("company.txt", "r");
    char buffer[500] = {0};
    char temp[500] = {0};
    int n = 256;
    Node **half = init(n);
    int cnt = 0;
    int flag = 0;
    while(fgets(temp, 500, fp) != NULL) {
        sscanf(temp,"%s", buffer);
        //printf("buffer = %s\n", buffer);
        for(int i = 0; buffer[i]; i++) {
            unsigned char c = (unsigned char)buffer[i];
            int index = c;
            half[index]->data = c;
            if(half[index]->freq == 0) cnt++;
            half[index]->freq += 1;
        }
        flag++;
        memset(temp, 0, 500);
        memset(buffer, 0, 500);
    }
    Node **half_tmp = init(cnt);
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(half[i]->freq != 0) {
            half_tmp[j++] = half[i];
        }
    }
    clear_half(half);
    Node *root = (Node *)malloc(sizeof(Node) * 1);
    root = built_half_tree(half_tmp, cnt);
    char Encode[500] = {0};
    Half **h = init_half();
    output(root, 0, Encode, h);
    for(int i = 0; i < 256; i++) {
        printf("h[%d]->data\t%s\n", i, h[i]->encode);
    }
    fclose(fp);
    fp = fopen("company.txt", "r");
    printf("ga");
    binary_Node *tree = init_node();
    printf("hie");
    char str[500];
    while(fgets(temp, 500, fp) != NULL) {
        sscanf(temp, "%s", buffer);
        printf("处理字符串\t%s\t", buffer);
        memset(str, 0, sizeof(str));
        int count = 0;
        for(int i = 0; buffer[i]; i++) {
            count++;
            unsigned char c = (unsigned char)buffer[i];
            strcat(str, h[c]->encode);
        }
        //printf("str = %s\n", str);
        insert(tree, str, count);
        memset(buffer, 0, sizeof(buffer));
    }
    memset(str, 0, 500);
    while(~scanf("%s", buffer)) {
        int i;
        int count = 0;
        for(i = 0; buffer[i]; i++) {
            count++;
            unsigned char c = (unsigned char)buffer[i];
            strcat(str, h[c]->encode);
        }
        //printf("encode = %s\n", str);
        printf("search result = %d\n", search(tree, str, count));
        memset(str, 0, sizeof(str));
        memset(buffer, 0, sizeof(buffer));
    }
    return 0;
}
