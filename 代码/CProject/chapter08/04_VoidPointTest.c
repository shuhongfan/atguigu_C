//
// Created by shkstart on 2023/10/12.
// void指针：无类型的指针

#include <stdio.h>

int main(){

    int x = 10;
    int *p = &x;
    printf("%d\n",*p);

    void *q = &x;

    //无类型的指针变量可以与其他类型的指针变量相关转换
//    int *r = q;
//    q = p;

//    int y = *q; //无法解读出void类型指针指向的数据

    int z = *((int *)q);
    printf("%d\n",z);



    return 0;
}
