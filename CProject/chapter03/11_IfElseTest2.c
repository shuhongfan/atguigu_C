//
// Created by shkstart on 2023/8/25.
// 分支结构1：if-else的练习

#include <stdio.h>

int main() {
    /*
     * 练习1：
     * 编写一个程序，判定某个年份是否为闰年。年份满足如下条件之一，即是闰年：
        (1) year 是 400 的整倍数： year%400==0
        (2) 能被4整除，但不能被100整除：year % 4 == 0 && year % 100 != 0
     *
     * */
//    printf("enter year:");
//    int year;
//    scanf("%d",&year);
//
//    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
//        printf("%d is a leap year",year);
//    }else{
//        printf("%d is not a leap year",year);
//    }


    /*
     * 练习2：熟悉if-else的嵌套使用
     * 出票系统：根据淡旺季的月份和年龄，打印票价。要求，月份和年龄从键盘获取输入。

        4_10 旺季：
            成人（18-60）：60
            儿童（< 18）   :  半价
            老人（> 60）   :  1/3
        淡季：
            成人   :  40
            其他   :  20
     *
     *
     * */
    int month;//月份
    printf("请输入月份：");
    scanf("%d",&month);

    int age;
    printf("请输入年龄：");
    scanf("%d",&age);

    double price = 60.0; //默认票价

    if(month >= 4 && month <= 10){ //旺季
        if(age < 18){
            price /= 2;
        }else if(age > 60){
            price /= 3;
        }
//        else{
//            //成人，走原票价
//        }
    }else{  //淡季
        if(age >= 18){
            price = 40;
        }else{
            price = 20;
        }

    }

    printf("票价为：%.2lf\n",price);



    return 0;
}
