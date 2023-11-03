//
// Created by shkstart on 2023/8/30.
// 二维数组课后练习

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {

    //练习1：获取所有元素的和
    //定义二维数组
    int arr1[ROWS][COLS] = {{3,  5, 8},
                            {12, 9},
                            {7,  0, 6, 4}}; //未显式赋值的位置，自动会被赋值为0

    //遍历二维数组，获取每个元素值，累加到变量sum中
    int sum = 0; //记录所有元素的和
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sum += arr1[i][j];
        }
    }

    //输出sum即可
    printf("总和为：%d\n", sum);


    //练习2：求二维数组最大值以及对应的行列角标
    int a[ROWS][COLS] = {{1,   2,  3,  4},
                         {9,   8,  7,  6},
                         {-10, 10, -5, 2}};
    int max = a[0][0]; //记录最大值。初始值为首元素a[0][0]
    int maxRow = 0; //记录最大值对应的行角标
    int maxCol = 0; //记录最大值对应的列角标

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if(max < a[i][j]){
                max = a[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    printf("最大值为%d\n",max);
    printf("最大值对应的行角标为%d\n",maxRow);
    printf("最大值对应的列角标为%d\n",maxCol); //row:行  column:列



    return 0;
}
