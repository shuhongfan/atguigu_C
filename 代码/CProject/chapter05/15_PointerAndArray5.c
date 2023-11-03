//
// Created by shkstart on 2023/9/1.
// 二维数组中使用指针变量的操作

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    //用指针访问二维数组，求二维数组元素的最大值。
    int a[ROWS][COLS] = {{10,  20,  30,  40},
                         {50,  60,  70,  80},
                         {120, 110, 100, 90}};

    //方式1：
//    int max = a[0][0];
//    for(int i = 0;i < ROWS;i++){
//        for(int j = 0;j < COLS;j++){
//            if(max < a[i][j]){
//                max = a[i][j];
//            }
//        }
//    }
    //方式2：
//    int max = a[0][0];
//    int *p = a[0]; //等同于int *p = &a[0][0]
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//
//            if(max < *(p + i*ROWS + j)){
//                max = *(p + i*ROWS + j);
//            }
//        }
//    }

    //方式3：
    int *q, max;
    for (q = a[0], max = *q; q < a[0] + ROWS * COLS; q++) {
        if (max < *q) {
            max = *q;
        }
    }


    printf("max=%d\n", max);


    return 0;
}
