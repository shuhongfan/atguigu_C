//
// Created by shkstart on 2023/10/9.
// 变量的分类：在程序中声明的位置的不同分为：局部变量 、 全局变量

//局部变量：函数内声明的、函数的形参、代码块内。 要求：局部变量在使用前，必须显式的赋值。
//全局变量：声明在函数外的变量。 说明：全局变量如果没有显式赋值，系统会自动提供默认值。

#include <stdio.h>

int m = 10,n = 20; //全局变量

void func1(int i){
    int j = 10;

    printf("m = %d\n",m);
}

void func2(){
    int i = 10;
    //代码块
    {
        int j = 20;
        printf("j = %d\n",j);
    }

//    printf("j = %d\n",j); //报错
    printf("i = %d\n",i);

    int m = 100; //局部变量
    printf("m = %d\n",m);
}

int main(){

    func2();

    return 0;
}
