//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

//情况1：函数在声明有返回值类型的情况下，如果没有在函数内部使用"return + 返回值"结构，则是错误的。
int test(){
    printf("hello");
    //return 12;
}

//情况2：如果函数在声明时，没有指明返回值类型，则默认此类型为int
int main(){
    int i = test();
    printf("%d\n",i);
    return 0;
}