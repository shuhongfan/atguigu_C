//
// Created by shkstart on 2023/8/24.
// 关于printf()的使用说明

#include <stdio.h>

int main(){

    printf("helloworld\n");

    /*
     * 1. printf()的标准格式
     *  printf(格式控制字符串,输出列表);
     *
     *  说明：格式控制字符串中占位符的个数 与 输出列表中变量或常量的个数相同，而且要一一对应。
    */

    printf("num is %d\n",5);

    int id = 10;
    printf("id = %d\n",id);

    printf("Tom's score = %d,level = %c\n",90,'A');

    /*
     * 2. 常见的占位符：
     *   %c:字符类型
     *   %d:十进制的int类型   （或%i）
     *   %ld：十进制的long类型
     *   %f: 浮点类型（float）
     *   %lf: 浮点类型（double）
     *   %s: 字符串
     *   %u: 十进制的无符号的整数
     *   %p: 指针
     *
     * */
    //举例：
    printf("There are %d students\n", 5);   //输出：There are 5 students

    char level = 'A';
    printf("this score level is:%c\n",level); //输出：this score level is:A

    //3. 输出格式说明
    //① 限定宽度
    printf("num is %10d\n",123);  //默认是右对齐的

    //② 修改为左对齐
    printf("num is %-10d\n",123);

    //③ 显示正负号
    printf("num id %+d\n",+10);
    printf("num id %+d\n",-10);


    //④限定小数位数
    printf("float is %.2f\n",12.355678);
    printf("float is %6.2f\n",12.345);

    //练习
    float f = 3.1415926535f;    // 单精度浮点数
    double d = 3.1415926535;  // 双精度浮点数

    // 使用 %f 输出单精度浮点数
    printf("Float: %f\n", f);  //Float: 3.141593
    // 使用 %lf 输出双精度浮点数
    printf("Double: %lf\n", d); //Double: 3.141593

    // 使用 %f 输出单精度浮点数
    printf("Float: %.8f\n", f);  //Float: 3.14159274
    // 使用 %lf 输出双精度浮点数
    printf("Double: %.8lf\n", d); //Double: 3.14159265

    return 0;
}
