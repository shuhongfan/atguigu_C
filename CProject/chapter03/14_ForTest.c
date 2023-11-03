//
// Created by shkstart on 2023/8/26.
// 循环结构1：for循环

/*
 * 1. C语言中的三种循环结构
 *  > for循环
 *  > while循环
 *  > do-while循环
 *
 * 2. 凡是循环结构都有四要素
 *   ① 初始化条件部分  ---> 只会执行1次
 *   ② 循环条件部分   ---> 一定是布尔类型的结果
 *   ③ 循环体部分    ---> 即为反复要执行的代码
 *   ④ 迭代条件部分  ---> 相关的变量会做更新、迭代
 *
 *
 * 3. for循环的格式
 *    for(①;②;④){
 *        ③
 *    }
 *
 *
 * 执行过程：① - ② - ③ - ④ - ② - ③ - ④ - ② - ... - ②
 *
 *
 *
 * */
#include <stdio.h>

int main(){

    //举例1：输出5行的HelloWorld!
//    printf("HelloWorld!\n");
//    printf("HelloWorld!\n");
//    printf("HelloWorld!\n");
//    printf("HelloWorld!\n");
//    printf("HelloWorld!\n");

//    int i;
//    for(i = 1;i <= 5;i++){
//        printf("HelloWorld!\n");
//    }
//
//    printf("i = %d\n",i);

    //可以写为：
    for(int i = 1;i <= 5;i++){
        printf("HelloWorld!\n");
    }

//    printf("i = %d\n",i); //此时i失效


    //举例2：
    int num = 1;
    for(printf("a");num < 3;printf("c"),num++){
        printf("b");
    }
    printf("\n");

    //举例3：遍历1-100之间的偶数,获取所有偶数的和，获取偶数的个数 ---> 体会累加的思想
    int sum = 0; // 记录总和
    int count = 0; //记录偶数的个数
    for(int i = 1; i <= 100;i++){
        if(i % 2 == 0){
            printf("%d\n",i);
            sum += i; //sum = sum + i;
            count++;
        }
    }
    printf("sum = %d\n",sum);
    printf("count = %d\n",count);

    return 0;
}
