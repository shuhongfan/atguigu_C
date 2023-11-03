//
// Created by shkstart on 2023/10/12.
//
//练习：动态创建数组，输入5个学生的成绩，另外一个函数检测成绩低于60 分的，输出不合格的成绩。

#include <stdio.h>
#include <stdlib.h>

#define N 5


void checkScore(int *ptr){
    printf("低于60分的成绩有：\n");
    for(int i = 0;i < N;i++){
        if(ptr[i] < 60){
            printf("%d\n",ptr[i]);
        }
    }
}

int main(){

    //1. 使用malloc()函数动态的申请内存空间（堆空间中），对应着int类型的长度为5的数组
    int *ptr_score;
    ptr_score = (int *)malloc(N * sizeof(int));

    if(ptr_score != NULL){

        //2. 给数组元素赋值，使用scanf()函数从键盘获取
        printf("请输入%d个成绩：\n",N);
        for(int i = 0;i < N;i++){
            scanf("%d",(ptr_score + i));
        }

        //3. 声明一个函数，在函数中判断成绩低于60的情况，将低于60分的成绩输出
        checkScore(ptr_score);

        //4. 释放申请的空间
        free(ptr_score);
    }



    return 0;
}