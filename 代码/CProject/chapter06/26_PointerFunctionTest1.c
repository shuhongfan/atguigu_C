//
// Created by shkstart on 2023/10/8.
// 测试指针函数的使用


#include <stdio.h>
#include <malloc.h>

//情境1：
int func1(){
    int m = 10;
    return m;
}

//情境2：如下的指针函数在使用中是错误的！
//int * func2(){
//    int m = 10;  //m变量是一个局部变量，随着函数的执行结束，就弹出栈。
//    return &m;
//}

//情境3：针对于情境2的修改
int * func3(){
    static int m = 10;  //m变量是一个静态的局部变量，存储在静态数据区，不会随着函数的执行结束而销毁,而是随着程序的执行结束而销毁。
    return &m;
}

//情境4：针对于情境2的修改
int * func4(){
    //malloc():使用此函数分配的内存空间是存储在堆空间中的。
    int *m = (int *)malloc(sizeof(int));

    if(m != NULL){ //只要分配堆内存成功，就给此变量赋值
        *m = 10;
    }

    return m;
}


int main(){

//    int n = func1();
//    printf("n = %d\n",n);

//    int *n = func2();
//    printf("*n = %d\n",*n);

    int *n = func3();
    printf("*n = %d\n",*n);

    int *m = func4();
    printf("*m = %d\n",*m);


    return 0;
}
