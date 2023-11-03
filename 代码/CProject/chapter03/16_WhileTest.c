//
// Created by shkstart on 2023/8/26.
// 循环结构2：while循环

/*
 * 1. 凡是循环结构都有四要素
 *   ① 初始化条件部分  ---> 只会执行1次
 *   ② 循环条件部分   ---> 一定是布尔类型的结果
 *   ③ 循环体部分    ---> 即为反复要执行的代码
 *   ④ 迭代条件部分  ---> 相关的变量会做更新、迭代
 *
 * 2. while的格式
 *
 * ①
 * while(②){
 *      ③
 *      ④
 * }
 *
 * 执行过程：① - ② - ③ - ④ - ② - ③ - ④ - ② - ... - ②
 *
 * 3.说明：
 *   > for循环和while循环是可以相互转换的！
 *   > for循环与while循环的区别：主要涉及到初始化条件部分对应的变量的作用域可能不同。
 *   > 注意：一定不要忘了在while循环的一对{}里声明迭代条件部分。否则，可能构成死循环！
 * */
#include <stdio.h>

int main(){

    //举例1：输出5行的HelloWorld!
    int i = 1;
    while(i <= 5){
        printf("HelloWorld\n");
        i++;
    }
    printf("%d\n",i);

    //举例2：遍历1-100之间的偶数,获取所有偶数的和，获取偶数的个数 ---> 体会累加的思想
    int num = 1;
    int sum = 0; //记录偶数的总和
    int count = 0; //记录偶数的个数
    while(num <= 100){
        if(num % 2 == 0){
            printf("%d\n",num);
            sum += num;
            count++;
        }
        num++;
    }

    printf("sum = %d\n",sum);
    printf("count = %d\n",count);

    return 0;
}
