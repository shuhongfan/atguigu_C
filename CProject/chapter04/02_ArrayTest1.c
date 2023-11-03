//
// Created by shkstart on 2023/8/29.
// 测试一维数组其它的定义方式

#include <stdio.h>

int main(){
    //复习：定义方式1：
    int arr1[10];
    //遍历
    for(int i = 0;i < sizeof(arr1) / sizeof(int);i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    //定义方式2：在声明数组的同时，给数组元素赋值
    int arr2[5] = {10,20,30,40,50};
    //遍历
    for(int i = 0;i < sizeof(arr2) / sizeof(int);i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");

    //变形1：
    int arr3[] = {10,20,30,40,50};
    printf("数组的长度为%zd\n",sizeof(arr3) / sizeof(int));

    //变形2：
    int arr4[5] = {10,20,30}; //相当于int arr4[5] = {10,20,30,0,0};
    printf("数组的长度为%zd\n",sizeof(arr4) / sizeof(int));
    //遍历
    for(int i = 0;i < sizeof(arr4) / sizeof(int);i++){
        printf("%d ",arr4[i]);
    }
    printf("\n");

    //变形3：将数组的所有元素赋值为0
    int arr5[10] = {0};
    //遍历
    for(int i = 0;i < sizeof(arr5) / sizeof(int);i++){
        printf("%d ",arr5[i]);
    }
    printf("\n");
    //其它类型举例
    double arr6[10] = {0.0};
    char arr7[10] = {0};

    //错误方式
    //int arr8[5] = {1,2,3,4,5,6}; //错误的！


    //定义方式3：声明数组的同时，可以给指定索引位置上的元素赋值
    int arr9[10] = {[1] = 3,[7] = 5,[9] = 10}; //未指定的索引位置自动赋值为0
    //遍历
    for(int i = 0;i < sizeof(arr9) / sizeof(int);i++){
        printf("%d ",arr9[i]);
    }
    printf("\n");

    //再举例：
    double arr10[10] = {[1] = 3,[7] = 5,[9] = 10}; //未指定的索引位置自动赋值为0.0
    //遍历
    for(int i = 0;i < sizeof(arr10) / sizeof(double);i++){
        printf("%.2lf ",arr10[i]);
    }
    printf("\n");

    //变形1：
    int arr11[10] = {[1] = 3,4,5,[7] = 5,11,[9] = 10};
    //遍历
    for(int i = 0;i < sizeof(arr11) / sizeof(int);i++){
        printf("%d ",arr11[i]);
    }
    printf("\n");

    //变形2：
    int arr12[] = {[1] = 3,[19] = 10}; //自动推断出数组的长度为20
    printf("数组的长度为%zd\n",sizeof(arr12) / sizeof(int));

    return 0;
}
