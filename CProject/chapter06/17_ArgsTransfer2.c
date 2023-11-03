//
// Created by shkstart on 2023/9/28.
//

/*
 * 参数传递机制2：地址传递
 *
 * 概念：实参将地址传递给形参，二者地址值相同。
 * 在函数内部，通过形参保存的地址，修改地址指向的数据的值，会导致函数外实参调用时，此数据的值也是修改以后的。---> 双向传递
 *
 * 针对的数据类型：指针、数组
 *
 * */

#include <stdio.h>

void swap(int *,int *);  //函数原型

int main(){

    int x = 6,y = 8;

    printf("x = %d,y = %d\n",x,y);

    //交互两个变量的值
    //方式1：正确的
//    int temp = x;
//    x = y;
//    y = temp;

    //方式2：正确的
    swap(&x,&y);


    printf("x = %d,y = %d\n",x,y);

    return 0;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}