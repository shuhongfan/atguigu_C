//
// Created by shkstart on 2023/8/29.
// 一维数组的练习：数值型数组的特征值的计算

#include <stdio.h>

int main(){
    //定义一个int型的一维数组，包含10个元素，然后求出数组中的最大值，最小值，总和，平均值，并输出出来。

    int arr[] = {34,32,5,2,45,-9,55,88,12,9};

    //获取数组的长度
    size_t arrLength = sizeof(arr) / sizeof(int); //size_t是sizeof()返回的类型

    int max = arr[0];
    for(int i = 1;i < arrLength;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("数组的最大值为%d\n",max);
    //***********************
    int min = arr[0];
    for(int i = 1;i < arrLength;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("数组的最小值为%d\n",min);
    //***********************
    int sum = 0;
    for(int i = 0;i < arrLength;i++){
        sum += arr[i];
    }
    printf("数组元素的总和为%d\n",sum);
    //***********************
    int avg = sum / arrLength;
    printf("数组元素的平均值为%d\n",avg);

//    double avg1 = (sum + 0.0) / arrLength;
    double avg1 = ((double)sum) / arrLength;
    printf("数组元素的平均值为%.2lf\n",avg1);


    return 0;
}
