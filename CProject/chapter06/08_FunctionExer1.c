//
// Created by shkstart on 2023/9/27.
//
#include <stdio.h>
#include <math.h>
/*
 * 任一大于 2 的偶数都可写成两个素数之和。利用判断素数的函数 prime()验证哥德巴赫猜想。
 *
 *
 * 素数：也称为质数，只能被1和它本身整除的自然数。比如：2,3,5,7,11,13,17,...
 *
 * --> 意味着除了1和它本身之外，在[2,数本身-1]范围内再无其它约数。
 *
 * */



//问题1：如何判断一个数num是一个素数？
//如果函数返回1，表示num是一个素数；如果函数返回0，表示num不是一个素数
int prime(int num){
    //for(int i = 2;i <= num - 1;i++){
    for(int i = 2;i <= sqrt(num);i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

//问题2：任意一个偶数是否可以写成两个素数之和？
int main(){

    int num;
    printf("请输入一个大于2的偶数：");
    scanf("%d",&num);

    for(int i = 2;i <= num / 2;i++){
        if(prime(i) && prime(num - i)){
            printf("%d = %d + %d",num,i,num - i);
            break;
        }
    }

    return 0;
}
