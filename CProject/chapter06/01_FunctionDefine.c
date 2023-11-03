//
// Created by shkstart on 2023/9/27.
//

/*
 * 1. 函数的声明格式：
 *  返回值类型 函数名(数据类型1 形参1,数据类型2 形参2,…,数据类型n 形参n){
	    函数体;
    }
 *
 *
 * */
#include <stdio.h>

//定义一个函数，计算两个整数的和，并返回
int add(int a,int b){
    int c;
    c = a + b;
    return c;

//    short s = 10;
//    return s; //s是short类型，可以自动转换为int类型。从语法上来讲和返回值类型匹配。
}

//定义一个函数，计算两个整数的较大值，并返回
int max(int a,int b){
    int c;
    c = (a >= b)? a : b;
    return c;
}

//定义一个函数，计算两个整数的较大值，并打印
void printMax(int a,int b){
    int c;
    c = (a >= b)? a : b;
    printf("%d\n",c);
}