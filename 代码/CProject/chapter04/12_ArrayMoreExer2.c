//
// Created by shkstart on 2023/8/30.
//二维数组课后练习

#include <stdio.h>
#define ROWS 10
#define COLS 10

int main(){
    //输出10行的杨辉三角

    //1. 声明二维数组，对应着杨辉三角
    int yangHui[ROWS][COLS];

    //2. 给二维数组的每个元素赋值
    for(int i = 0;i < ROWS;i++){
        //2.1 每行的首尾元素赋值为1
        yangHui[i][0] = 1;
        yangHui[i][i] = 1;
        //2.2 每行的非首尾元素赋值为：yanghui[i][j] = yanghui[i-1][j-1] + yanghui[i-1][j];
        //if(i >= 2){
            for(int j = 1;j < i;j++){
                yangHui[i][j] = yangHui[i-1][j-1] + yangHui[i-1][j];
            }
        //}


    }


    //3. 遍历二维数组
    for(int i = 0;i < ROWS;i++){
        for(int j = 0; j <= i;j++){
            printf("%d  ",yangHui[i][j]);
        }
        printf("\n");
    }



    return 0;
}
