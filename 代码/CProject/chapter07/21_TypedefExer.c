//
// Created by shkstart on 2023/10/11.
// typedef的使用举例

#include <stdio.h>
#define N 3

//函数
int add(int m ,int n){
    int sum = m + n;
    return sum;
}

//数组
char str[N][30] = {"尚硅谷教育","www.atguigu.com","010-56253825"};

//使用typedef
typedef int (*PTR_FUNC)(int,int);

typedef char (*PTR_ARR)[30];

int main(){

    //调用函数：使用函数指针
    int (*ptr_add)(int,int);
    ptr_add = &add;
    int sum = (*ptr_add)(10,20);
    printf("sum = %d\n",sum);

    //遍历数组：使用数组指针
//    char *ptr_arr[30]; //定义了一个指针数组
    char (*ptr_arr)[30]; //定义了一个数组指针,指向了长度为30的char型数组
    ptr_arr = str; //将str[0]的首地址赋给ptr_arr指针

    for(int i = 0;i < N;i++){
        printf("str[%d]:%s\n",i,*(ptr_arr + i));
    }


    //##########使用typedef声明的类型进行调用##############
    //调用函数
    PTR_FUNC ptr_add1 = &add;
    int sum1 = (*ptr_add1)(100,200);
    printf("sum1 = %d\n",sum1);

    //遍历数组
    PTR_ARR ptr_arr1 = str;//将str[0]的首地址赋给ptr_arr1变量
    for(int i = 0;i < N;i++){
        printf("str[%d]:%s\n",i,*(ptr_arr1 + i));
    }


    return 0;
}