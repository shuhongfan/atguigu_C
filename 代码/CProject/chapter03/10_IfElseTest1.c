//
// Created by shkstart on 2023/8/25.
// 分支结构1：if-else的使用

/*
 * 说明1：
 * 当条件表达式之间是“`互斥`”关系时（即彼此没有交集），条件判断语句及执行语句间顺序无所谓。
 * 当条件表达式之间是“`包含`”关系时，“`小上大下 / 子上父下`”，否则范围小的条件表达式将不可能被执行。
 *
 * 说明2：
 * 当if-else结构是“多选一”时，最后的`else是可选的`，根据需要可以省略
 *
 * 说明3：
 * 语句块只有一条执行语句时，一对`{}可以省略`，但建议保留
 * */

#include <stdio.h>

int main() {

    /*
     * 练习3：
     * 岳小鹏参加Java考试，他和父亲岳不群达成承诺：
        如果：
        成绩为100分时，奖励一辆跑车；
        成绩为(80，99]时，奖励一辆山地自行车；
        当成绩为[60,80]时，奖励环球影城一日游；
        其它时，胖揍一顿。

        说明：默认成绩是在[0,100]范围内
     *
     */
    int score = 88;
//    if(score == 100){
//        printf("奖励一辆跑车\n");
//    }else if(score > 80 && score <= 99){
//        printf("奖励一辆山地自行车\n");
//    }else if(score >= 60 && score <= 80){
//        printf("奖励环球影城一日游\n");
//    }else{
//        printf("胖揍一顿\n");
//    }

    score = 56;
    if(score == 100)
        printf("奖励一辆跑车\n");
        //printf("奖励一辆跑车\n");
    else if(score > 80)
        printf("奖励一辆山地自行车\n");
    else if(score >= 60){
        printf("奖励环球影城一日游\n");
    }
//    else{
//        printf("胖揍一顿\n");
//    }


    //练习
//    int number = 20;
//    if (number > 6)
//        if (number < 12)
//            printf("The number >= 6,且 <= 12.\n");
//    else
//        printf("判断不成功.\n");


    int number = 20;
    if (number > 6) {
        if (number < 12)
            printf("The number >= 6,且 <= 12.\n");
    }else
        printf("判断不成功.\n");

    return 0;
}
