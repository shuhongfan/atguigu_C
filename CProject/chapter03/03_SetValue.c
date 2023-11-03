//
// Created by shkstart on 2023/8/25.
// 测试赋值运算符的使用
/*
 * = : - 当“=”两侧数据类型不一致时，可以使用自动类型转换或使用强制类型转换原则进行处理。
 *     - 支持`连续赋值`。
 *
 * 拓展： +=   -=   *=  /=  %=
 *
 * */

#include <stdio.h>

int main() {

    // =
    int i1 = 10;
    double d1 = i1; //自动类型提升

    short s1 = (short) i1;  //强制类型转换

    //连续赋值
    int a, b;
    a = b = 10;

    //定义变量的简化方式
    int m1 = 10;
    int n1 = 20;

    //可以改写为：
    int m2 = 10, n2 = 20;

    //测试：+=   -=   *=  /=  %=
    int x1 = 10;
    x1 += 5; //理解为 x1 = x1 + 5;
    printf("x1 = %d\n", x1);

    int x2 = 13;
    x2 /= 5; //理解为 x2 = x2 / 5;
    printf("x2 = %d\n", x2);


    /*
     * 现有变量m,n,请编写代码，交互m和n的值
     *
     * */
    int m = 10;
    int n = 20;

    printf("m = %d,n = %d\n", m, n);

    //交换两个变量的值
    int temp = m;
    m = n;
    n = temp;


    printf("m = %d,n = %d\n", m, n);

    //考研真题：
    double d;
    float f;
    long l;
    int i;
    i = f = l = d = 20.0/3;
    printf("%d %ld %.1f %.1f\n",i,l,f,d);

    return 0;
}

