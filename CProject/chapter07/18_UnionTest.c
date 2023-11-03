//
// Created by shkstart on 2023/10/10.
// 测试共用体的使用

#include <stdio.h>

//1. 声明共用体
union Data{
    short a;
    float b;
    char c;
};

//2.2 方式2
union Data1{
    short a;
    float b;
    char c;
} data2,data3;

int main(){

    //2. 声明共用体变量
    //2.1 方式1：
    union Data data1;

    //2.2 方式2 :见上

    //3. 结构体变量占用的内存空间
    printf("%d\n",sizeof(data1));

    //4. 调用共用体变量的成员
    //4.1 方式1
    data1.a = 12;

    //4.2 方式2
    union Data data4 = {.a = 12};

    //4.3 方式3
    union Data data5 = {12}; //默认给首成员赋值

    //错误的方式1
    union Data data6 = {.a = 12,.b = 12.3F,.c = 'A'};
    printf("%c\n",data6.c); //A
    printf("%f\n",data6.b); //0.000000
    //错误的方式2
    union Data data7 = {12,12.3F,'A'};


    // ->符号的使用：针对的是共用体指针变量
    union Data *data_ptr ;
    data_ptr = &data1;
    printf("%d\n",data1.a);
    printf("%d\n",(*data_ptr).a);
    printf("%d\n",data_ptr->a);

    return 0;
}
