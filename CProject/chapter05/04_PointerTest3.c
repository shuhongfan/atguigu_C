//
// Created by shkstart on 2023/8/31.
// 指针的常用运算：指针与整数值的加减运算

#include <stdio.h>
#define LENGTH 5

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[1];

    printf("%p\n",p);   //00000009747ff8b4
    printf("%d\n",*p); //2

    printf("%p\n",p + 1); //00000009747ff8b8
    printf("%p\n",p - 1); //00000009747ff8b0

    printf("%d\n",*(p + 1)); //3
    printf("%d\n",*(p - 1)); //1


    //练习：遍历数组 int arr1[LENGTH] = {10,20,30,40,50};
    int arr1[LENGTH] = {10,20,30,40,50};
    //方式1：
    for(int i = 0;i < LENGTH;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    //方式2：
    int *p1 = &arr1[0];
    for(int i = 0;i < LENGTH;i++){
        printf("%d ",*(p1 + i));
    }
    printf("\n");
    //方式3：
    int *p2;
    for(p2 = arr1;p2 < arr1 + LENGTH;p2++){
        printf("%d ",*p2);
    }

    return 0;
}
