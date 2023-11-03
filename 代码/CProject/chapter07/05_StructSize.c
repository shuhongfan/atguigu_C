#include <stdio.h>

//
// Created by shkstart on 2023/10/10.
// 测试结构体占用的空间


struct A{
    char a;
    int b;
    char c;
} s;

int main() {
    printf("%d\n", sizeof(s)); // 12
    return 0;
}