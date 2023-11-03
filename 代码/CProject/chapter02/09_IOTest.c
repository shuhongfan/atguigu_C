//
// Created by shkstart on 2023/8/24.
// 测试输入输出相关的函数

#include <stdio.h>

#define PI 3.14

/*
 * 1. 何为输入？何为输出？
 *   - 输出：从计算机向外部输出设备(显示器、打印机)输出数据。
 *   - 输入：从输入设备(键盘、鼠标、扫描仪)向计算机输入数据。
 *
 *
 * */
int main(){

    /*
     * 2. scanf()的使用
     *  格式：scanf("格式控制字符串",参数地址列表)
     *
     */
    //练习：计算圆的面积，其半径由用户指定
//    float radius;//圆的半径
//    printf("enter radius:");
//    scanf("%f",&radius);  //理解为阻塞式函数
//
//    float area = PI * radius * radius;
//    printf("area = %.2f\n",area);


    //练习：输入多个变量的值，求乘积
//    int a,b,c;//用于接收从键盘输入的三个值
//    printf("enter three numbers:");
////    scanf("%d%d%d",&a,&b,&c); //输入数据时，使用空格、Tab、回车操作分隔
//    scanf("%d,%d,%d",&a,&b,&c); //输入数据时，使用逗号分隔
//
//    int result = a * b * c;
//    printf("result = %d\n",result);


    /*
     * 3. getchar()与putchar()的使用
     *   > putChar():输出一个字符
     *   > getChar():输入一个字符
     * */
//    char c1 = 'A';
//    putchar(c1);
//
//    char c2 = getchar(); //是一个阻塞式的函数
//    putchar(c2);


    /*
     * 4. gets()与puts()的使用
     *   > puts() : 输出一个字符串
     *   > gets() : 输入一个字符串
     * */

    //超纲：
    //输出字符串
    char str[] = {"China"};
    puts(str);
    char str1[] = {"Beijing"};
    puts(str1);

    //读入字符串
    char str2[15];
    printf("enter your name:");
    gets(str2);  //从键盘读入字符串，并将字符串数据保存在str2数组中

    puts(str2);

    return 0;
}