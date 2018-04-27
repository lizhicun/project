/*************************************************************************
	> File Name:Hao Xing Qing~ atoi.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月21日 星期三 14时20分08秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int my_atoi(const char *target) {
    int len = strlen(target), ans = 0, digit = 0, flag = 0;
    if(target[0] == '-') {
        target++;
        while(target[0]) {
            ans = ans * 10 + (target[0] - '0');
            target++;
        }
        return 0 - ans;
    }
    while(target[0]) {
        ans = ans * 10 + (target[0] - '0');
        target++;
    }
    return ans;
}

int main() {
    char str[100];
    clock_t start, end;
    FILE *fp = fopen("atoi_TEST.ini", "r");
    while(fscanf(fp, "%s", str) != EOF) {
        start = clock();
        printf("my_atoi = %d\t\t", my_atoi(str));
        end = clock();
        printf("use time %.8f\n", (double)(end - start) / CLOCKS_PER_SEC);

        start = clock();
        printf("system_atoi = %d\t\t", atoi(str));
        end = clock();
        printf("use time %.8f\n", (double)(end - start) / CLOCKS_PER_SEC);
    }
    return 0;
}
