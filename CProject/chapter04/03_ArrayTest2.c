//
// Created by shkstart on 2023/8/29.
// 测试一维数组的内存分析

#include <stdio.h>
#include <malloc.h>

int main(){

    //错误的赋值方式
    //错误1：
//    int arr1[5];
//    arr1 = {1,2,3,4,5};

    //错误2：
//    int arr2[5] = {1,2,3,4,5};
//    arr2 = {10,20,30,40};

    int arr3[5];
    arr3[0] = 10;
    arr3[1] = 20;
    //...可以给数组元素赋值
    //错误3：
//    arr3 = NULL;//报错
    //错误原因：数组一旦声明，其地址就不可更改！

    //错误4：
    int arr4[5];
//    int arr5[5] = arr4;

//    int arr6[5];
//    arr6 = arr4;

    //变长数组
    int length = 10;
    //方式1：在c99标准中，支持变长数组
    int arr7[length];
    int arr8[length + 5];

    //方式2：使用malloc()函数，动态的分配内存，创建一个指定长度的数组(通用的方式)
    int *arr9 = (int*)malloc(length * sizeof(int)); //在堆空间开辟的数组空间
    arr9[0] = 10;
    arr9[1] = 20;
    printf("%d\n",arr9[1]);

    //注意点：使用完动态创建的数组后，一定要回收此数组的内存空间。否则，就存在内存泄漏。
    free(arr9);



    return 0;
}
