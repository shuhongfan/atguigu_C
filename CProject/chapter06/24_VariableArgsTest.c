//
// Created by shkstart on 2023/10/8.
// 测试可变参数的函数

#include <stdio.h>
#include <stdarg.h>

//声明一个可变参数的函数，用于计算多个整数的平均值
double average(int count,...){ //count来记录可变参数的个数
    va_list args; //args来存储可变参数
    va_start(args,count); //用来初始化va_list变量的

    double sum = 0.0; //记录所有整数的和

    for(int i = 0;i < count;i++){
        int num = va_arg(args,int);  //依次取出每个可变的参数
        sum += num;
    }

    va_end(args); //结束可变参数的处理

    return sum / count;


}


int main(){
    double avg = average(5,10,20,30,40,50);
    printf("average = %.2lf",avg);

    return 0;
}
