//
// Created by shkstart on 2023/10/10.
// 需求：输入一个班级的学生信息(包含id、name、gender、score)，
// 并把学习成绩超过全班平均成绩的学生找出来，输出这部分学生的姓名和成绩。


#include <stdio.h>

#define N 5

//1. 声明一个学生的结构体
struct Student{
    int id;
    char name[20];
    char gender;
    int score;
};

int main(){

    //2. 声明学生结构体的数组
    struct Student stuArr[N];

    int sumScore = 0; //记录总成绩

    //3. 使用循环的方式，遍历数组元素，给每个学生的成员赋值(id、name、gender、score),使用scanf从键盘获取数据
    for(int i = 0;i < N;i++){
        printf("请输入学生的信息(id、name、gender、score)：\n");
        scanf("%d %s %c %d",&stuArr[i].id,stuArr[i].name,&stuArr[i].gender,&stuArr[i].score);
        //4. 计算班级的总成绩
        sumScore += stuArr[i].score;
    }
    //5. 计算班级的平均成绩
    double avgScore = (double)sumScore / N;
    printf("avgScores = %.2lf\n",avgScore);

    //6. 使用循环的方式，遍历数组元素，获取成绩高于班级平均成绩的学生姓名和成绩，并打印
    for(int i = 0;i < N;i++){
        if(stuArr[i].score > avgScore){
            printf("%s : %d\n",stuArr[i].name,stuArr[i].score);
        }
    }


    return 0;
}
