//
// Created by shkstart on 2023/9/1.
// 测试：二级指针、多重指针

#include <stdio.h>

int main(){
    //复习：
    int num = 10;
    int *p1 = &num;
    int *p2 = p1; //p1和p2作为两个指针，存储的都是num变量在内存中的地址

    printf("%p\n",p1); //0000002e8c9ffbbc
    printf("%p\n",p2); //0000002e8c9ffbbc

    *p2 = 100;
    printf("%d\n",num);

    //
    int a = 10;
    int *p3 = &a;
    //如何声明二级指针
    //但是此时p4定义的二级指针的方式是错误的！
    int *p4 = &p3;
    printf("%p\n",p3); //0000001acd1ff960
    printf("%p\n",&p3);//0000001acd1ff958
    printf("%p\n",p4); //0000001acd1ff958
//    printf("%d\n",**p4);//此时编译不通过

    //正确的定义二级指针：
    int **p5;
    p5 = &p3;
    printf("%d\n",**p5);

    //举例1：
    //错误的：
//    int b = 10;
//    int **pp1 = &b;
    //正确的：
    int b = 10;
    int *pp0 = &b;
    int **pp1 = &pp0;


    return 0;
}