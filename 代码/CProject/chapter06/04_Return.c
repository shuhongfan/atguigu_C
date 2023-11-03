//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

/*
 * return的作用：① 结束函数的执行  ② 在有返回值类型的函数中，"return 返回值"结构还可以返回一个结果给函数。
 *
 * 注意点：return关键字后面不能编写执行语句，因为不可执行。
 */

void show(int age){

    if(age >= 22){
        printf("你到了法定结婚的年龄~\n");
    }else{
        printf("可以再多谈谈女朋友~\n");
    }

}

void show1(int age){

    if(age >= 22){
        printf("你到了法定结婚的年龄~\n");
        return;
//        printf("此语句不可执行~\n");
//        int m = 10,n = 20;
    }

    printf("可以再多谈谈女朋友~\n");

}

void printNum(int start,int limit){
    for(int i = start;i <= limit;i++){
        if(i % 5 == 0){
            return;
            //printf("今天买彩票，一定能中奖");
        }
        printf("i = %d\n", i);
    }
    //printf("over!\n", i);
}

int main(){
//    int age = 20;
//    age = 23;
//    show(age);
//    show1(age);

    printNum(1,40);

    return 0;
}