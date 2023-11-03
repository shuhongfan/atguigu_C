//
// Created by shkstart on 2023/9/28.
//

/*
 * 定义一个数组，通过函数给数组元素赋值
 * */

#include <stdio.h>

#define MAXLEN 10

void setValue(int arr[],int len){
    for(int i = 0;i < len;i++){
        arr[i] = i * 10;
    }
}

void setValue1(int *arr,int len){
    for(int i = 0;i < len;i++){
        arr[i] = i * 10;
    }
}

int main(){

    int arr[MAXLEN] = {0};

    printf("遍历数组\n");
    for(int i = 0;i < MAXLEN;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

//    setValue(arr,MAXLEN);
    setValue1(arr,MAXLEN);

    printf("遍历数组\n");
    for(int i = 0;i < MAXLEN;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}