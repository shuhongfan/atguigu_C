//
// Created by shkstart on 2023/8/30.
// 二维数组其它的定义方式

#include <stdio.h>

int main() {

    //定义方式2:声明数组的同时，给所有的数组元素赋值
    int arr[3][4] = {{1, 2,  3,  4},
                     {5, 6,  7,  8},
                     {9, 10, 11, 12}};
    //测试地址
    printf("%p\n",arr[0]);     //0000006ac71ffd30
    printf("%p\n",arr[0] + 1); //0000006ac71ffd34
    printf("%p\n",arr[0] + 2); //0000006ac71ffd38
    printf("%p\n",arr[0] + 3); //0000006ac71ffd3c
    printf("%p\n",arr[0] + 4); //0000006ac71ffd40
    printf("%p\n",arr + 1);    //0000006ac71ffd40

    printf("%p\n",arr[1]);     //0000006ac71ffd40
    printf("%p\n",arr[1] + 1); //0000006ac71ffd44

    //定义方式3：部分元素赋值
    //没有赋值的位置，自动赋值为"零"
    int arr1[2][2] = {[0][0] = 1,[1][0] = 2};
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    //定义方式4：使用单层大括号赋值
    int arr2[2][4] = {1,2,3,4,5,6,7,8};

    //定义方式5：方式4的简化
    int arr3[][4] = {1,2,3,4,5,6,7,8};
    int arr4[][4] = {{1,2,3,4},{5,6,7,8}};
    int arr5[][4] = {1,2,3,4,5,6,7}; //没有赋值的位置，自动赋值为零

    return 0;
}