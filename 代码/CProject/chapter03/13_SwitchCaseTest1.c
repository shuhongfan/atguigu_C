//
// Created by shkstart on 2023/8/26.
// switch-case 的练习

#include <stdio.h>
/*
 * - 结论：凡是使用switch-case的结构都可以转换为if-else结构。反之，不成立。
 * - 开发经验：如果既可以使用switch-case，又可以使用if-else，建议使用switch-case。因为效率稍高。
 *
 * */
int main(){

    /*
     * 使用switch-case实现：对学生成绩大于60分的，输出“合格”。低于60分的，输出“不合格”。
     * */
    //思路1：不靠谱
//    int score = 78;
//    switch(score){
//        case 0:
//            //...
//        case 1:
//            //...
//        //....
//    }

    //思路2：
//    int score = 78;
//    switch(score / 10){ //0 - 10
//        case 0:
//            printf("不及格\n");
//            break;
//        case 1:
//            printf("不及格\n");
//            break;
//        case 2:
//            printf("不及格\n");
//            break;
//        case 3:
//            printf("不及格\n");
//            break;
//        case 4:
//            printf("不及格\n");
//            break;
//        case 5:
//            printf("不及格\n");
//            break;
//        case 6:
//            printf("及格\n");
//            break;
//        case 7:
//            printf("及格\n");
//            break;
//        case 8:
//            printf("及格\n");
//            break;
//        case 9:
//            printf("及格\n");
//            break;
//        case 10:
//            printf("及格\n");
//            break;
//    }

    //改进:case穿透
    int score = 78;
    switch(score / 10){ //0 - 10
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("不及格\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("及格\n");
            break;
    }

    //思路3：
    int score1 = 78;
    switch(score1 / 60){
        case 0:
            printf("不及格\n");
            break;
        case 1:
            printf("及格\n");
            break;
    }


    return 0;
}
