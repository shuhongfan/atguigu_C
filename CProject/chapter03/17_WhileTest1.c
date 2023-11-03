//
// Created by shkstart on 2023/8/26.
// while循环的练习

#include <stdio.h>

//世界最高山峰是珠穆朗玛峰，它的高度是8848.86米，假如我有一张足够大的纸，它的厚度是0.1毫米。
//请问，我折叠多少次，可以折成珠穆朗玛峰的高度?
int main(){

    double zfHeight = 8848860; //珠峰的高度
    double paperHeight = 0.1; //纸的厚度

    int count = 0; //折纸的次数

    while(paperHeight < zfHeight){
        paperHeight *= 2;  //折纸的操作
        count++;
    }

    printf("折纸高度为%.2lf,共折了%d次\n",paperHeight,count);

    return 0;
}
