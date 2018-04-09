/*************************************************************************
	> File Name:Hao Xing Qing~ sqrt_binary.cpp
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月21日 星期三 08时34分50秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define e 0.001

float sqrt_binary(float a) {
    float l = 0, r = a, mid = (l + r) / 2, tmp = mid * mid;
    while(fabs(tmp - a) > e) {
        if(tmp > a) {
            r = mid;
        } else {
            l = mid;
        }
        mid = (l + r) / 2.0;
        tmp = mid * mid;
    }
    return mid;
}

float sqrt_Newton(float a) {
    float x = a, y = x * x;
    while((y - a) > e) {
        x = (x + a / x) / 2;
        y = x * x;
    }
    return x;
}

float amazing_sqrt(float a) {
    float half = 0.5f * a;
    int i = *(int *)&a; // ???
    i = 0x5f375a86 - (i >> 1);
    a = *(float *)&i;
    a = a * (1.5f - half * a * a);
    a = a * (1.5f - half * a * a);
    a = a * (1.5f - half * a * a);
    return 1/a;
}

int main() {
    clock_t start, end;
    float test;
    FILE *fp = fopen("TEST_sqrt.ini", "r");
    while(fscanf(fp, "%f", &test) != EOF) {
        printf("example test:%f\n", test);
        start = clock();
        printf("binary sqrt = %f\t\t", sqrt_binary(test));
        end = clock();
        
        double seconds = (double)(end - start) / CLOCKS_PER_SEC;
        printf("user time is: %.8f\n", seconds);

        start = clock();
        printf("system sqrt = %f\t\t", sqrt(test));
        end = clock();
        seconds = (double)(end - start) / CLOCKS_PER_SEC;
        printf("user time is: %.8f\n", seconds);

        start = clock();
        printf("Newton sqrt = %f\t\t", sqrt_Newton(test));
        end = clock();
        seconds = (double)(end - start) / CLOCKS_PER_SEC;
        printf("user time is: %.8f\n", seconds);

        start = clock();
        printf("amazing sqrt = %f\t\t", amazing_sqrt(test));
        end = clock();
        seconds = (double)(end - start) / CLOCKS_PER_SEC;
        printf("user time is: %.8f\n", seconds);

        printf("\n");
    }
    return 0;
}
