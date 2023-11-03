//
// Created by shkstart on 2023/8/26.
// ATM取款操作的练习
/*
 * 声明变量balance并初始化为0，用以表示银行账户的余额，下面通过ATM机程序实现存款，取款等功能。

    =========ATM========
       1、存款
       2、取款
       3、显示余额
       4、退出
    请选择(1-4)：
 * */

#include <stdio.h>

int main(){

    double balance = 0.0; //余额

    int selection;//用于记录用户的选择

    int isFlag = 1;//用于控制循环的退出

    double addMoney,minusMoney; //分别表示存款和取款的额度

    do{
        printf("=========ATM========\n");
        printf("      1、存款\n");
        printf("      2、取款\n");
        printf("      3、显示余额\n");
        printf("      4、退出\n");
        printf("     请选择(1-4)：");

        scanf("%d",&selection);

        switch(selection){
            case 1:
                printf("请输入存款的额度:");
                scanf("%lf",&addMoney);
                if(addMoney > 0){
                    balance += addMoney;
                    printf("存款成功\n");
                }else{
                    printf("您输入的数据非法!\n");
                }
                break;
            case 2:
                printf("请输入取款的额度:");
                scanf("%lf",&minusMoney);
                if(minusMoney > 0 && balance >= minusMoney){
                    balance -= minusMoney;
                    printf("取款成功\n");
                }else{
                    printf("您输入的数据非法或余额不足\n");
                }
                break;
            case 3:
                printf("您的账户余额为%.2lf\n",balance);
                break;
            case 4: //退出
                isFlag = 0;
                printf("欢迎下次光临^_^");
                break;
            default:
                printf("请重新选择\n");

        }


    }while(isFlag);


    return 0;
}
