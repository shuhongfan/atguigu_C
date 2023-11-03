//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

//打印5行6列的*型矩形
void print(){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 6;j++){
            printf("*");
        }
        printf("\n");
    }
}

//打印m行n列的*型矩形
void printGraph(int m,int n){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            printf("*");
        }
        printf("\n");
    }
}

//打印m行n列的*型矩形，并返回此矩形的面积
int printGraphAndArea(int m,int n){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < n;j++){
            printf("*");
        }
        printf("\n");
    }
    return m * n;
}