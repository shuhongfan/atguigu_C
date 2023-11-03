//
// Created by shkstart on 2023/8/24.
// 关于浮点类型的使用

#include <stdio.h>

/*
 * 1. 常用的类型： float(4字节) \ double(8字节) \ long double(12字节)
 *
 * 2. float 表示数据的范围要大于long类型表示的范围
 *
 * 3.浮点型变量不能使用signed或unsigned修饰符。
 *
 * 4. 最常用的浮点类型为：double 类型，因为精度比float高。
 *
 * 5. 浮点型常量，默认为 double 类型。
 *
 * 6. 关于后缀：
 *      如果定义float类型的，则需要以"F"或"f"作为后缀
 *      如果定义long double类型的，则需要以"l"或"L"作为后缀
 *
 * */
int main(){

    double d1 = 12.3;

    double d2 = d1 + 2.3;  //2.3是double类型

    float f1 = 12.3F;
    float f2 = 12.3f;

    long double d3 = 12.3L;

    //其它的表示方式：（了解）
    double d4 = 12.3e3;
    printf("d4 = %lf\n",d4);

    /*
     * 练习：有人用温度计测量出用华氏法表示的温度(如64°F），今要求把它转换为以摄氏法表示的温度(如17.8℃)。
     * 转换的公式为：$c = \frac{5}{9}(f - 32)$。
     * 其中，f 代表华氏温度，c 代表摄氏温度。
     *
     * */
    double fDegree; //华氏温度
    double cDegree; //摄氏温度

    fDegree = 64.0F;

    cDegree = (5.0 / 9) * (fDegree - 32);
    printf("华氏温度%.2lf,对应的摄氏温度为%.2lf",fDegree,cDegree);

    return 0;
}
