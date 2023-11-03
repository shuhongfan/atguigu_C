//
// Created by shkstart on 2023/9/1.
// 一维数组中指针的使用的练习1

#include <stdio.h>
#define N 5

int main(){

    //练习：数组元素赋值、遍历
    int arr[N];

    printf("请输入%d个值:",N);
    //1. 通过循环的方式，给数组元素赋值
    //方式1：
//    for(int i = 0;i < N;i++){
//        scanf("%d",&arr[i]);
//    }
    //方式2：
//    for(int i = 0;i < N;i++){
//        scanf("%d",arr + i);
//    }
    //方式3：
    int *p = &arr[0];
    //等同于 p = arr;
    for(int i = 0;i < N;i++){
        scanf("%d",p + i);
    }

    //2. 通过循环的方式，遍历数组
    //方式1：
//    for(int i = 0;i < N;i++){
//        printf("%d ",arr[i]);
//    }
    //方式2：
//    for(int i = 0;i < N;i++){
//        printf("%d ",*(arr + i));
//    }
    //方式3：
//    p = arr; //将arr[0]的地址赋给p
//    for(int i = 0;i < N;i++){
//        printf("%d ",*(p + i));
//    }
    //方式4：针对于方式3的变形
//    for(int i = 0;i < N;i++){
//        printf("%d ",*(p++));
//    }
    //或
    for(p = arr;p < arr + N;p++){
        printf("%d ",*p);

    }


    printf("\n");


    return 0;
}
