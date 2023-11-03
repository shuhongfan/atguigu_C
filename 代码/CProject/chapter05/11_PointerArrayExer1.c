//
// Created by shkstart on 2023/9/1.
// 一维数组中指针的使用的练习2

#include <stdio.h>
#define N 5

int main(){

    //获取数组的最大值
    int arr[N];
    //1. 给数组元素赋值
    for(int i = 0;i < N;i++){
        scanf("%d",arr + i); //arr + i : 表示arr[i]的地址
    }
    //2. 声明一个变量，用于保存数组中的最大值
    int max = arr[0];

    //3. 通过循环的方式，获取数组的最大值
    //方式1：
//    for(int i = 1;i < N;i++){
//        if(max < arr[i]){
//            max = arr[i];
//        }
//    }
    //方式2：
//    for(int i = 1;i < N;i++){
//        if(max < *(arr + i)){
//            max = *(arr + i);
//        }
//    }
    //方式3：
    int *p = arr;
    for(int i = 1;i < N;i++){
        if(max < *(p + i)){
            max = *(p + i);
        }
    }

    printf("max = %d\n",max);

    return 0;
}