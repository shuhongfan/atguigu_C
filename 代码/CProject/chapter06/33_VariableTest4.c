//
// Created by shkstart on 2023/10/9.
//
#include <stdio.h>

int f(int); //函数原型

int main() {
    int a = 2, i; //(自动)局部变量
    for (i = 0; i < 3; i++)
        printf("%d\n", f(a)); //输出f(a)的值

    return 0;
}

int f(int a) {
    auto int b = 0; //(自动)局部变量
    static int c = 3; //静态局部变量
    printf("c = %d\n",c);
    b++;
    c++;
    return (a + b + c);
}