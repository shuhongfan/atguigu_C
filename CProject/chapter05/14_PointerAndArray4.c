//
// Created by shkstart on 2023/9/1.
// 测试：二维数组中指针的使用:使用指针变量访问

#include <stdio.h>


int main() {

    int a[3][2] = {{10, 20},
                   {30, 40},
                   {50, 60}};

    int *p;
    p = &a[0][0];  //将a[0][0]元素的值对应的地址赋给p
    printf("%p\n", p);     //000000f2f49ff7b0
    printf("%p\n", p + 1); //000000f2f49ff7b4
    printf("%p\n", p + 2); //000000f2f49ff7b8

    int *q;
    q = a[0];  //将a[0][0]的地址赋给q
    printf("%p\n", q);      //000000f2f49ff7b0
    printf("%p\n", q + 1);  //000000f2f49ff7b4
    printf("%p\n", q + 2);  //000000f2f49ff7b8

    int *r;
    r = a;   //a[0]的地址赋给r
    printf("%p\n", r);      //000000f2f49ff7b0
    printf("%p\n", r + 1);  //000000f2f49ff7b4
    printf("%p\n", r + 2);  //000000f2f49ff7b8


    //举例：
    int b[4][3] = {{10, 20, 30},
                   {40, 50, 60},
                   {70, 80, 90},
                   {100, 110, 120}};

    int *p1 = b[0];
    printf("b[1][2]对应的地址/指针为：%p\n",p+1*3+2); //0000008dfdbffdb4
    printf("b[1][2]对应的值为：%d\n",*(p+1*3+2)); //60
    printf("b[1][2]对应的值为：%d\n",p[1*3+2]);  //60


    return 0;
}
