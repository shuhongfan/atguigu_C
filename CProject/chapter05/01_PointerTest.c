//
// Created by shkstart on 2023/8/31.
// 指针变量的定义

#include <stdio.h>

int main() {

    //定义指针变量
    int *p1;
    int* p2;
    int * p3;

    //注意：指针变量中只能存放地址，不要将一个整数（或任何其它非地址类型的数据）赋给一个指针变量。
    int a = 10;
    p1 = a; //将a对应的数据10赋给指针变量p1是错误的。因为p1记录的变量或常量在内存中的地址，而非数据值。

    //同一行声明两个指针变量
    char *p1Char,*p2Char; //此时的两个变量都是指针变量
    //错误的：
//    char *p3Char,p4Char; //此时的p3Char是指针变量，p4Char是char类型变量

    return 0;
}
