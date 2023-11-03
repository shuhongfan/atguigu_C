//
// Created by shkstart on 2023/8/25.
// 测试位运算符的使用
/*
 *  <<   >>   &  |  ^  ~
 *
 * 1. 位运算符针对的是整型数值做的运算
 * 2. 运算规则：在一定范围内，数据每向左移动一位，相当于原数据*2。（正数、负数都适用）
 *            在一定范围内，数据每向右移动一位，相当于原数据/2。（正数、负数都适用）
 *
 *  高效的方式计算2 * 8的值（经典面试题）
 *  answer: 2 << 3  或  8 << 1
 * */
#include <stdio.h>

int main(){
    int m1 = 3;
    printf("%d\n",m1 << 1);
    printf("%d\n",m1 << 2);
    printf("%d\n",m1 << 3);
    printf("%d\n",m1 << 4);

    int m2 = -3;
    printf("%d\n",m2 << 1);
    printf("%d\n",m2 << 2);

    int m3 = 12;
    printf("%d\n",m3 >> 1);
    printf("%d\n",m3 >> 2);

    printf("%d\n",9 & 7);
    printf("%d\n",9 | 7);
    printf("%d\n",~9);
    printf("%d\n",~-10);


    return 0;
}
