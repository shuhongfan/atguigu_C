//
// Created by shkstart on 2023/8/24.
// 字符类型的使用

#include <stdio.h>

/*
 * 在C语言中，使用char表示一个字符。使用''括起来。
 *
 * 一个char占用1个字节
 *
 * char类型中的每个字符对应着一个ASCII码，因为ASCII码是一个数值，所以char类型的变量可以参与+ - * /的运算。
 *
 * 根据C90标准，C语言允许在关键字char前面使用signed或unsigned。
 * */
int main(){

    //表示方式1：使用一对'',括起来一个单独的字符
    char c1 = 'A';

    printf("c1 = %c\n",c1); // A
    printf("c1 = %d\n",c1); // 65

    //表示方式2：使用具体字符对应的ASCII码表示
    char c2 = 66;
    printf("c2 = %c\n",c2); // B

    //区分： '1' 和 1
    char c3 = '1';
    char c4 = 1;
    printf("c3 = %d,c4 = %d\n",c3,c4);

    printf("c1+1 = %c\n",c1+1);

    //表示方式3：使用转义字符
    char c5 = '\n'; //换行符
    char c6 = '\t'; //制表符

    char c7 = '\''; //表示的字符为 '



    return 0;
}
