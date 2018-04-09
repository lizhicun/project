/*************************************************************************
	> File Name:Hao Xing Qing~ testcase.h
	> Author:Cun Jie 
	> Mail:80585426@qq.com 
	> Created Time: 2018年03月18日 星期日 19时59分22秒
 ************************************************************************/

#ifndef _TESTCASE_H
#define _TESTCASE_H
#include"quick_sort.h"
#include"test.h"

TEST(quick_sort, example1) {
    int data[10] = {9, 6, 3, 1, 0, 7, 2, 8, 5, 4};
    quick_sort(data, 6, 9);
    for(int i = 0; i < 10; i++) {
        EXPECT_EQ(i, data[i]);
    }
}
#endif
