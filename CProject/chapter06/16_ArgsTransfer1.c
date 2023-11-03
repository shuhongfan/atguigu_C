//
// Created by shkstart on 2023/9/28.
//

#include <stdio.h>

void swap(int,int);  //函数原型

int main(){

    int x = 6,y = 8;

    printf("x = %d,y = %d\n",x,y);

    //交互两个变量的值
    //方式1：正确的
    int temp = x;
    x = y;
    y = temp;

    //方式2：错误的
//    swap(x,y);


    printf("x = %d,y = %d\n",x,y);

    return 0;
}

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}