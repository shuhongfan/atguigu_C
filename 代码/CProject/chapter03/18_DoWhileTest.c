//
// Created by shkstart on 2023/8/26.
// 循环结构2：while循环

/*
 *  1. 凡是循环结构都有四要素
 *   ① 初始化条件部分  ---> 只会执行1次
 *   ② 循环条件部分   ---> 一定是布尔类型的结果
 *   ③ 循环体部分    ---> 即为反复要执行的代码
 *   ④ 迭代条件部分  ---> 相关的变量会做更新、迭代
 *
 *  2. do-while的格式
 *  ①
 *  do{
 *      ③
 *      ④
 *  }while(②);
 *
 *  执行过程：① - ③ - ④ - ② - ③ - ④ - ② - ③ - ④ - ② - ... - ②
 *
 *  3.说明
 *   > do-while循环至少会执行一次循环体
 *   > for、while、do-while三者之间可以相互转换。
 *
 *
 * */
#include <stdio.h>

int main(){

    //举例1：输出5行的HelloWorld!
    int i = 1;
    do{
        printf("HelloWorld\n");
        i++;
    }while(i <= 5);

    //举例2：遍历1-100之间的偶数,获取所有偶数的和，获取偶数的个数 ---> 体会累加的思想
    int num = 1;
    int sum = 0; //记录偶数的总和
    int count = 0; //记录偶数的个数
    do{
        if(num % 2 == 0){
            printf("%d\n",num);
            sum += num;
            ++count;
        }
        num++;
    }while(num <= 100);

    printf("sum = %d\n",sum);
    printf("count = %d\n",count);


    /*
     * 举例3：do-while至少会执行一次循环体！
     * */
    int m1 = 10;
    while(m1 > 10){
        printf("hello:while\n");
        m1--;
    }

    int m2 = 10;
    do{
        printf("hello:do-while\n");
        m2--;
    }while(m2 > 10);

    return 0;
}