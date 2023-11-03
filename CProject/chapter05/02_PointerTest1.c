//
// Created by shkstart on 2023/8/31.
// 测试指针的取址运算 &

#include <stdio.h>

int main(){

    int num = 10;
    printf("num = %d\n", num); // 输出变量的值。 num = 10
    // %p:占位符，表示地址的
    printf("&num = %p\n", &num); //&num = 00000082d9fffb6c

    //给指针变量赋值
    int *p1;
    p1 = &num;
    printf("%p\n",p1); //00000082d9fffb6c


    //举例
    int i = 10;
    int *pp1,*pp2;
    pp1 = &i;
    pp2 = pp1;

    printf("%p\n",&i);
    printf("%p\n",pp1);
    printf("%p\n",pp2);

    //举例
    float f1 = 12.3F;
    float *pF = &f1;
    //不要使用如下的操作：
//    int *p2 = &f1;


    //不要在给指针变量赋值之前使用此变量！---> 野指针
    int *p3;
//    printf("%p\n",p3);

    //可以在调用前赋空指针
    p3 = NULL;

    //举例：
    int m = 10, *ptr;
    ptr = &m;
    printf("%d\n",m); //10

    scanf("%d", ptr); //等价于scanf("%d", &m);

    printf("%d\n",m);


    return 0;
}
