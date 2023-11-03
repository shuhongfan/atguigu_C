//
// Created by shkstart on 2023/8/28.
// 测试goto关键字的使用


#include <stdio.h>

int main(){
    //举例1：
//    label:printf("hello\n");
//    goto label;

    //举例2：
//    int i = 1;
//    label:printf("hello-%d\n",i);
//    i++;
//    goto label;

    //举例3：录入学生成绩，并计算学生的平均分。当输入-1时程序结束。
    //方式1：使用while(1) \ for(;;)
    //方式2：使用goto
    int score ; //记录每个学生的分数
    int sum = 0; //记录学生的总分
    int i = 0; //记录第几个学生
    next:printf("请输入第%d个学生的成绩：",i+1);
    scanf("%d",&score);
    if(score != -1){
        sum += score;
        i++;
        goto next;
    }
    if(i != 0)
        printf("%d个学生的平均成绩是%d\n",i,sum / i);

    return 0;
}
