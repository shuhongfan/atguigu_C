//
// Created by shkstart on 2023/8/24.
//
#include <stdio.h>

int main(){

    //规则1：隐式类型转换（或自动类型转换）
    //情况1：窄类型自动转为宽类型
    short s1 = 10;
    int i1 = s1; //自动的类型转换

    long l1 = s1; //自动的类型转换

    double d1 = l1; //自动的类型转换

    float f1 = 123.4f;

    double d2 = f1; //自动的类型转换

    char c1 = 'A';//65

    int i2 = c1 + i1; //自动的类型转换

    //特例：如果是char类型、short类型之间做运算，运算的结果是int类型
    //short s2 = c1 + s1; //会导致编译器警告
    int i3 = c1 + s1;


    //情况2：宽类型赋值给窄类型
    float f2 = 12.3; //将double类型12.3转换为了float，会警告

    double d3 = 12.3;
    int i4 = d3; //将double类型的值转换为了int类型，会警告

    //为了避免上述的警告，我们需要使用强制类型转换
    //规则2：强制类型转换：显式的将宽类型转换为窄类型。需要使用强转符：()

    double dd1 = 12.9;
    int ii1 = (int)dd1; //没有警告
    printf("ii1 = %d\n",ii1); //数据截断

    //注意：强制类型转换会导致精度损失。

    int i = 40000;
    short s = (short)i;
    printf("%d\n",s); //-25536

    return 0;
}