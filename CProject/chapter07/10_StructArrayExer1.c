//
// Created by shkstart on 2023/10/10.
// 需求：编写一个统计选票的系统，根据先后输入的候选人姓名，统计各人的得票数。

#include <stdio.h>
#include <string.h>

#define N 3

//1. 声明候选人的结构体（包含姓名、票数的成员）
struct Person {
    char name[20];
    int count;
};

int main() {

    //2. 声明候选人的数组
    struct Person perArr[N] = {{"zhang3", 0},
                               {"li4",    0},
                               {"wang5",  0}};


    //3. 假设有10个选民，通过遍历10次的方式，获取各自的投票人（使用scanf从键盘获取数据）
    char vote_name[20]; //记录投票给谁
    for(int i = 0;i < 10;i++){
        printf("你要投票给谁呢？(zhang3、li4、wang5)\n");
        scanf("%s",vote_name);
        //4. 当选民投票给某个候选人时，对应的候选人的票数+1
        for(int j = 0;j < N;j++){
            if(strcmp(vote_name,perArr[j].name) == 0){
                perArr[j].count++;
                break;
            }
        }
    }

    //5. 遍历候选人及其票数
    printf("结果统计:\n");
    for(int i = 0;i < N;i++){
        printf("%s:%d\n",perArr[i].name,perArr[i].count);
    }



    return 0;
}
