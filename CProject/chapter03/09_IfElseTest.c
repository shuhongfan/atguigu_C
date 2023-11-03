//
// Created by shkstart on 2023/8/25.
// 分支结构1：if-else的使用

/*
 * 1. 格式：
 * 格式1：单分支
 * if(条件表达式){
 *    语句块
 * }
 *
 * 格式2：二选一
 * if(条件表达式1){
 *    语句块1
 * }else{
 *    语句块2
 * }
 *
 * 格式3：多选一
 * if(条件表达式1){
 *    语句块1
 * }else if(条件表达式2){
 *    语句块2
 * }...
 *
 *
 * else if(条件表达式n){
 *    语句块n
 * }else{
 *    语句块n+1
 * }
 *
 *
 *
 * */


#include <stdio.h>

int main() {

    //练习1：成年人心率的正常范围是每分钟60-100次。
    //体检时，如果心率不在此范围内，则提示需要做进一步的检查。
    int heartBeats = 59;
    if(heartBeats < 60 || heartBeats > 100){
        printf("你需要做进一步的检查\n");
    }

    printf("体检结束\n");



    //练习2：定义一个整数，判定是偶数还是奇数
    int num = 13;
    if(num % 2 == 0){
        printf("num 是一个偶数\n");
    }else{
        printf("num 是一个奇数\n");
    }





    return 0;
}