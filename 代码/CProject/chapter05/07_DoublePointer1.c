//
// Created by shkstart on 2023/9/1.
// 二级指针的练习

#include <stdio.h>
#include <malloc.h>

int main(){

    //使用malloc()函数创建二维数组
    /*
     * 复习：使用malloc()函数创建一维数组
     * int length = 5;
     * int *arr = (int *)malloc(length * sizeof(int));
     *
     * */

    //1. 从键盘获取row 和 column
    int row,column;
    printf("第一维长度：");
    scanf("%d",&row);
    printf("第二维长度：");
    scanf("%d",&column);

    //2. 初始化外层数组
    int **arr = (int **)malloc(row * sizeof(int *));
    for(int i = 0;i < row;i++){
        //3. 初始化内层数组，并给内层数组的元素赋值
        arr[i] = (int *)malloc(column * sizeof(int));

        for(int j = 0;j < column;j++){
            arr[i][j] = 1;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //获取可以使用此二维数组
    //.....

    //使用完以后，回收此数组
    free(arr);

    return 0;
}
