//
// Created by shkstart on 2023/10/9.
//
#include <stdio.h>

void nonStaticFun() {
    auto int n = 10; //动态存储方式
    printf("n=%d\n", n);
    n++;
    printf("n++=%d\n", n);
}

void staticFun() {
    static int n = 10; //静态存储方式
    printf("static n=%d\n", n);
    n++;
    printf("n++=%d\n", n);
}

int main() {
    nonStaticFun();
    staticFun();
    printf("\n");

    nonStaticFun();
    staticFun();
    printf("\n");
    return 0;
}