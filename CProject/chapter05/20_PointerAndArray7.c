//
// Created by shkstart on 2023/9/2.
// 测试指向固定长度的数组的指针变量的使用

#include <stdio.h>


int main() {
    int arr[3][4] = {{1, 2,  3,  4},
                     {5, 6,  7,  8},
                     {9, 10, 11, 12}};
    int (*q)[4];
    q = arr; //将arr[0]的地址赋给q

    printf("arr[0]的地址为：%p\n", arr);            //0000006460dffb40
    printf("arr[0]的地址为：%p\n", q);              //0000006460dffb40
    printf("arr[0][1]的地址为：%p\n", arr[0] + 1);    //0000006460dffb44
    printf("arr[0][1]的地址为：%p\n", q[0] + 1);      //0000006460dffb44
    printf("arr[0][1]的地址为：%p\n", *arr + 1);  //0000006460dffb44
    printf("arr[0][1]的地址为：%p\n", *q + 1);    //0000006460dffb44

    printf("arr[1]的地址为：%p\n", arr + 1);       //0000006460dffb50
    printf("arr[1]的地址为：%p\n", q + 1);         //0000006460dffb50

    printf("arr[1][0]的值为：%d\n", *(*(arr + 1))); //5
    printf("arr[1][0]的值为：%d\n", *(*(q + 1)));   //5
    printf("arr[1][1]的值为：%d ", *(*(arr + 1) + 1));//6
    printf("\n");
    //遍历二维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", *(*(q + i) + j));
        }
        printf("\n");
    }

    return 0;
}