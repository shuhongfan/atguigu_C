//
// Created by shkstart on 2023/10/8.
// 测试回调函数的使用

//有两个整数a和b，由用户输入1,2或3。如输入1，程序就给出a和b中的大者，
// 输入2，就给出a和b中的小者，输入3，则求a与b之和。

#include <stdio.h>

//回调函数
int fun(int x,int y,int (*p)(int,int)){
    //通过函数指针调用指向的函数
    int result = (*p)(x,y);
    return result;
}

int max(int x,int y){
    int result = (x > y)? x : y;

    printf("max = ");
    return result;
}

int min(int x,int y){
    int result = (x < y)? x : y;

    printf("min = ");
    return result;
}

int sum(int x,int y){
    int result = x + y;

    printf("sum = ");
    return result;
}

int main(){
    int a = 10,b = 20;

    int m;
    printf("请输入一个整数(1,2或3):");
    scanf("%d",&m);
    int result;
    switch(m){
        case 1:
            result = fun(a,b,&max);
            break;
        case 2:
            result = fun(a,b,min);
            break;
        case 3:
            result = fun(a,b,sum);
            break;
    }

    printf("%d\n",result);

    return 0;
}
