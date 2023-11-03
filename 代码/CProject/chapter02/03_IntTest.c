//
// Created by shkstart on 2023/8/24.
//

#include <stdio.h>
#include <limits.h>

/*
 * 整型的使用
 *
 * 1. short \ int \ long \ long long
 * 以64位编译器为例：
 *      short: 2字节
 *      int : 4字节
 *      long : 8字节
 *      long long : 8字节  (c99新增的)
 * 2. 整型可以被signed 、 unsigned 修饰。
 *
 * 3.最常用的整型类型为：int类型。
 *
 * 4.整数型常量，默认为int类型。
 *
 * 5. 关于后缀：
 *    声明long类型变量时，可以以后缀"l"或"L"结尾。
 *    声明long long类型，则后缀以`ll`或`LL`结尾。
 * */

int main(){

    int i1 = 10; //省略了 signed
    signed int i2 = 10;

    i1 = -10;

    //声明一个无符号的整数:非负数
    unsigned int i3 = 10;


    i3 = i3 + 20; //20:常量，默认是int类型

//    关于后缀：
    long l1 = 1232342234322; //后续要讲的隐式转换（或自动类型提升）
    long l2 = 12323423424322L;


    printf("%d\n", INT_MIN  );  // -2147483648
    printf("%d\n", INT_MAX  );  // 2147483647

    return 0;
}