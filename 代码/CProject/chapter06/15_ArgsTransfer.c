//
// Created by shkstart on 2023/9/28.
// 测试函数的形参的传递机制

/*
 * 参数传递机制1：值传递
 *
 * 概念：实参值复制给被调用函数的形参
 * 如果我们在函数内部，修改形参的值，不会影响函数外部实参的值。 ---> 单向传递
 *
 * 对应的数据类型：基本数据类型（整型、浮点型、字符型）、结构体、共用体、枚举类型。
 *
 * */
#include <stdio.h>

void increment(int a) {
    a++;
    printf("a = %d\n",a); // a = 11
}

int increment1(int a) {
    a++;
    printf("a = %d\n",a); // a = 11
    return a;
}

int main(){
    int i = 10;
    printf("i = %d\n", i); // i = 10

//    increment(i);

    i = increment1(i);

    printf("i = %d\n", i); // i = 10  ---> i = 11
    return 0;
}
