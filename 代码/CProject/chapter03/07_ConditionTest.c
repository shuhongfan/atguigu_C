//
// Created by shkstart on 2023/8/25.
// 测试条件运算符的使用
/*
 * (条件表达式)? 表达式1:表达式2
 *
 * 说明：1. 根据条件表达式的真假，决定执行（或返回）表达式1还是表达式2.
 *         如果条件表达式为true（或真，或非0），返回表达式1。否则，返回表达式2。
 *
 *      2. 结论：凡是可以使用条件运算符的题目，都可以该写为if-else结构
 *              反之，不成立。
 *      3. 如果开发中，既可以使用条件运算符，又可以使用if-else，建议使用条件运算符。因为条件运算符效率较高。
 * */
#include <stdio.h>

int main(){

    //获取两个数的较大值
    int m = 10;
    int n = 20;
    int max = (m > n)? m : n;
    printf("m和n的较大值为：%d\n",max);

    //获取三个数的最大值
    int a = 12,b = 34,c = 5;
    int abMax = (a > b) ? a : b;
    int maxx = (abMax > c) ? abMax : c;
    printf("a,b,c三者中的最大值为%d\n",maxx);

    //合并为：int maxx = (((a > b) ? a : b) > c) ? ((a > b) ? a : b) : c;
    // 可读性很差，建议不要合并。

    return 0;
}
