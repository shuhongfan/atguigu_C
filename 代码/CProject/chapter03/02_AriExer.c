//
// Created by shkstart on 2023/8/25.
// 算术运算符的课后练习

#include <stdio.h>

int main(){
    /*
     * 练习1：
     * 随意给出一个整数，打印显示它的个位数，十位数，百位数的值。
        格式如下：
        数字xxx的情况如下：
        个位数：
        十位数：
        百位数：

        例如：
        数字153的情况如下：
        个位数：3
        十位数：5
        百位数：1
     * */
    int num = 153;
    int ge = num % 10;
    int shi = num / 10 % 10;  // int shi = num % 100 / 10
    int bai = num / 100;
    printf("%d的个位是%d,十位是%d,百位是%d\n",num,ge,shi,bai);


    /*
     * 练习2：为抵抗洪水，战士连续作战89小时，编程计算共多少天零多少小时？
     * */
    int hours = 89;
    int day = hours / 24;
    int hour = hours % 24;
    printf("%d小时对应着%d天零%d小时",hours,day,hour);



    return 0;
}
