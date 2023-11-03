//
// Created by shkstart on 2023/8/29.
// 测试一维数组的复制

#include <stdio.h>
#include <string.h>

#define LENGTH 3
#define ARRAY_SIZE 5

int main(){

    //错误的方式:不能实现数组的复制！
//    int arr1[3] = {10,20,30};
//    int *arr2 = arr1; //将arr1保存的数组的首地址赋值给arr2指针变量
//
//    arr2[0] = 100;
//
//    for(int i = 0;i < 3;i++){
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");

    //正确的方式1：使用循环
//    int arr3[LENGTH] = {10,20,30};
//    //创建一个与arr3元素类型相同且长度相同的数组
//    int arr4[LENGTH];
//    //通过循环的方式，给arr4的各个元素赋值
//    for(int i = 0;i < LENGTH;i++){
//        arr4[i] = arr3[i];
//    }
//
//    //遍历arr4数组
//    for(int i = 0;i < LENGTH;i++){
//        printf("%d ",arr4[i]);
//    }
//    printf("\n");

    //正确的方式2：使用 memcpy() 函数
    int arr5[ARRAY_SIZE] = {1,2,3,4,5}; //源数组
    int arr6[ARRAY_SIZE]; //目标数组

    //3个参数依次为：目标数组、源数组以及要复制的字节数。
    memcpy(arr6,arr5,ARRAY_SIZE * sizeof(int));

    //遍历arr6
    for(int i = 0;i < ARRAY_SIZE;i++){
        printf("%d ",arr6[i]);
    }
    printf("\n");



    return 0;
}
