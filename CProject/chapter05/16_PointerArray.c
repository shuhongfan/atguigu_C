//
// Created by shkstart on 2023/9/1.
// 数组指针 与 指针数组

#include <stdio.h>


int main() {

    //如何定义一个指针数组
    int *ptrArr[10];

    //举例1：
    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    int *arr[] = {&a, &b, &c, &d, &e};//定义一个int类型的指针数组

    for(int i = 0;i < 5;i++){
        printf("%d ",*arr[i]);
    }
    printf("\n");

    //举例2：
    int line1[] = {1, 2, 3, 4};         //声明数组，矩阵的第一行
    int line2[] = {5, 6, 7, 8};         //声明数组，矩阵的第二行
    int line3[] = {9, 10, 11, 12};         //声明数组，矩阵的第三行

    //定义一个指针数组，保存三个一维数组的地址
    int *ptr_Arr[3];
    ptr_Arr[0] = line1; //将line1[0]的地址赋给指针变量ptr_Arr[0]
    ptr_Arr[1] = line2; //将line2[0]的地址赋给指针变量ptr_Arr[1]
    ptr_Arr[2] = line3; //将line3[0]的地址赋给指针变量ptr_Arr[2]

    for(int i = 0;i < 3;i++){ //外层for循环用来遍历指针数组
        for(int j = 0;j < 4;j++){ //内存for循环用来遍历line1\line2\line3数组的各个元素
            //printf("%d ",*(ptr_Arr[i] + j));
            //或
            printf("%d ",ptr_Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
