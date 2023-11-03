//
// Created by shkstart on 2023/8/30.
//二维数组课后练习

#include <stdio.h>
#define ROWS 2
#define COLS 3


int main(){

    //练习3：
    //声明数组a、b
    int a[ROWS][COLS] = {1,2,3,4,5,6};
    int b[COLS][ROWS];

    //a[i][j] ---> b[j][i]
    for(int i = 0;i < ROWS;i++){
        for(int j = 0;j < COLS;j++){
            b[j][i] = a[i][j];
        }
    }

    //遍历a数组
    printf("遍历a数组:\n");
    for(int i = 0;i < ROWS;i++){
        for(int j = 0;j < COLS;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    //遍历b数组
    printf("遍历b数组:\n");
    for(int i = 0;i < COLS;i++){
        for(int j = 0;j < ROWS;j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
