//
// Created by shkstart on 2023/8/31.
// 测试指针的取值运算符 *

#include <stdio.h>

int main(){

    //举例：通过指针变量修改指向内存地址位置上的值
    int i1 = 10;
    int *p1 = &i1;

    printf("%d\n",i1); //10
    *p1 = 20;
    printf("%d\n",i1); //20

    char c1 = 'A';
    char *p2 = &c1;
    printf("%c\n",c1);
    *p2 = 'B';
    printf("%c\n",c1);

    //举例：定义指针变量 p3、p4，
    // 默认各自指向整数a、b，a、b从键盘输入。设计程序，使得 p3 指向其中的较大值，p4 指向其中的较小值 。
    int a,b;
    int *p3,*p4;

    scanf("%d%d",&a,&b);

    p3 = &a;
    p4 = &b;
    printf("%d\n",*p3);
    printf("%d\n",*p4);

    //通过判断，使得p3 指向其中的较大值，p4 指向其中的较小值
    if(a < b){
        int *p = p3;
        p3 = p4;
        p4 = p;
    }

    printf("%d\n",*p3);
    printf("%d\n",*p4);







    return 0;
}

