//
// Created by shkstart on 2023/8/26.
// break和continue关键字的使用

/*
 *            使用范围          在循环结构中使用的作用                     相同点
 * break:     switch-case
 *            循环结构          结束（或跳出）当前循环结构                 不能在其后声明执行语句
 * continue:  循环结构          结束（或跳出）当次循环，开始下一次循环        不能在其后声明执行语句
 *
 *
 * */
#include <stdio.h>

int main(){

    /*
     for(int i = 1;i <= 10;i++){
        if(i % 4 == 0){
            break; //123
            //continue; //123567910
            //此后的代码不能被执行
            //printf("今晚有女明星孙燕姿要约我");
        }
        printf("%d",i);
    }*/

    //嵌套循环中
    for(int i = 1;i <= 4;i++){
        for(int j = 1;j <= 10;j++){
            if(j % 4 == 0){
                //break; //结束包裹break的最近的一层循环！
                continue; //结束包裹continue的最近的一层循环结构的当次循环
            }
            printf("%d",j); //
        }
    }

    return 0;
}
