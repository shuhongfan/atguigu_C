//
// Created by shkstart on 2023/8/29.
// 测试一维数组的反转

#include <stdio.h>

int main(){

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    //获取数组的长度
    size_t length = sizeof(arr1) / sizeof(int);
    //arr1[i] 与 arr1[arr1.length - 1 - i]

    //反转方式1：
//    for(int i = 0;i < length / 2;i++){
//        int temp = arr1[i];
//        arr1[i] = arr1[length - 1 - i];
//        arr1[length - 1 - i] = temp;
//    }
    //反转方式2
    for(int left = 0,right = length - 1;left < right;left++,right--){
        int temp = arr1[left];
        arr1[left] = arr1[right];
        arr1[right] = temp;
    }


    //遍历
    for(int i = 0;i < length;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");


    return 0;
}
