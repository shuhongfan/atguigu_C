//
// Created by shkstart on 2023/8/28.
// 一维数组的定义

#include <stdio.h>

#define NUM 10

int main(){

    //1. 数组的定义
    int arr[10];
    int arr1[NUM];

    //2. 数组元素的调用：使用角标
    //角标的合法范围是：从0开始,到数组的长度-1结束
    arr[0] = 10;//给数组的第1个元素赋值
    arr[1] = 20;//给数组的第2个元素赋值
    //...

    //3. 问题：数组角标越界
    //只要角标不在合法范围内，都是越界。比如：-1,-2,数组的长度,数组的长度+1
    int arr2[5];
    arr2[5] = 10; //错误的！
    printf("%d\n",arr2[5]); //没有必要打印了

    //4. 关于长度
    //4.1 数组占用的字节数
    int arr3[20];
    printf("数组占用的字节数为：%zd\n",sizeof(arr3)); //80

    double arr4[5];
    printf("数组占用的字节数为：%zd\n",sizeof(arr4));//40

    //4.2 数组的长度
    printf("数组的长度为：%zd\n",sizeof(arr3) / sizeof(int)); //20
    printf("数组的长度为：%zd\n",sizeof(arr4) / sizeof(double)); //5

    //5. 一维数组的遍历
    //声明长度为10的int类型数组，给数组元素依次赋值为0,1,2,3,4,5,6,7,8,9，并遍历数组所有元素
    int nums[10];
    size_t length = sizeof(nums) / sizeof(int); //sizeof()返回的类型标准情况下是size_t
    //给每一个数组元素赋值
    for(int i = 0;i < length;i++){
        nums[i] = i;
    }
    //遍历数组元素
    printf("遍历一维数组的元素：\n");
    for(int i = 0;i < length;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");


    return 0;
}
