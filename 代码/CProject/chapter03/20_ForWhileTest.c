//
// Created by shkstart on 2023/8/26.
// 测试"无限"循环结构

/*
 * 1. 最简单"无限"循环格式：`while(1)` , `for(;;)`
 * 2. - 开发中，有时并不确定需要循环多少次，需要根据循环体内部某些条件，来控制循环的结束（使用break）。
 *    - 如果此循环结构不能终止，则构成了死循环！开发中要避免出现死循环。
 * */
#include <stdio.h>

int main(){

    /*
     * 从键盘读入个数不确定的整数，并判断读入的正数和负数的个数，输入为0时结束程序。
     * */
    int number; //记录用户输入的整数

    int positiveNumber = 0;//记录正数的个数
    int negativeNumber = 0;//记录负数的个数

    while(1){//for(;;){
        printf("请输入一个整数(输入0时结束):");
        scanf("%d",&number);

        if(number > 0){
            positiveNumber++;
        }else if(number < 0){
            negativeNumber++;
        }else{
            break;
        }
    }

    printf("正数的个数为：%d\n",positiveNumber);
    printf("负数的个数为：%d\n",negativeNumber);

    return 0;
}
