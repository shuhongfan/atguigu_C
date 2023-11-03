//
// Created by shkstart on 2023/8/25.
// 测试比较运算符的使用
/*
 *  >   >=   <   <=   ==   !=
 *
 *  1. 比较的结果是布尔类型。 默认使用1表示真，0表示假
 *  2. 注意区分 ==  和  =
 * */
#include <stdio.h>

int main(){

    int m1 = 10;
    int n1 = 20;
    printf("m1 > n1 : %d\n",m1 > n1);
    printf("m1 < n1 : %d\n",m1 < n1);

    //注意区分 ==  和  =
    int m2 = 0;
    if(m2 = 0){//if(m2 == 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    //注意：在c语言中，不要使用连续的比较操作，容易出错！
    int m3 = 10;
    //错误举例：
    if(1 < m3 < 5){
        printf("beijing\n");
    }else{
        printf("nanjing\n");
    }
    //正确的写法
    if(m3 > 1 && m3 < 5){
        printf("beijing\n");
    }else{
        printf("nanjing\n");
    }


    return 0;
}
