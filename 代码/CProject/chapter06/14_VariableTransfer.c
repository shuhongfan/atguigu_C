//
// Created by shkstart on 2023/9/28.
//

#include <stdio.h>

int main(){

    //情况1：针对于基本数据类型变量来讲，将保存的数据值传递给新的变量
    int a = 10;
    int b = a;

    printf("a = %d\n",a); //a = 10

    b = 20;

    printf("a = %d\n",a); //a = 10

    //情况2：针对于数组类型，将数组的首地址传递给新的变量
    int arr1[5] = {1,2,3,4,5};
    int *arr2;
    arr2 = arr1; //将arr1[0]的地址赋给arr2

    //遍历arr1数组
    for(int i = 0;i < 5;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    arr2[0] = 10;

    //遍历arr1数组
    for(int i = 0;i < 5;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    //情况3：针对于指针变量来讲，将指针变量保存的地址传递给新的变量
    int i = 10;
    int *p = &i;

    printf("%d\n",*p); // 10

    int *q = p;

    *q = 20;

    printf("%d\n",*p); // 20


    return 0;
}
