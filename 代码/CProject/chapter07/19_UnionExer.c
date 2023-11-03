//
// Created by shkstart on 2023/10/10.
//
#include <stdio.h>

#define TOTAL 2 //人员总数

struct Person {
    char name[20];
    int id;
    char gender; //性别  m->男  f->女
    char profession;//职业 s->学生  t->老师
    union {
        float score;
        char course[20];
    } sc; //sc 是一个共用体变量
};

int main() {
    int i;
    struct Person persons[TOTAL];  //定义一个结构体数组

    //输入人员信息
    for (i = 0; i < TOTAL; i++) {
        printf("Input info: ");
        scanf("%s %d %c %c", persons[i].name, &(persons[i].id), &(persons[i].gender), &(persons[i].profession));
        if (persons[i].profession == 's') { //如果是学生
            printf("请输入学生成绩：");
            scanf("%f", &persons[i].sc.score);
        } else { //如果是老师
            printf("请输入老师课程：");
            scanf("%s", persons[i].sc.course);
        }
    }

    //输出人员信息
    printf("\nName\tid\tgender\tProfession\tScore/Course\n");
    for (i = 0; i < TOTAL; i++) {
        if (persons[i].profession == 's') { //如果是学生
            printf("%s\t%d\t%c\t%c\t\t%f\n", persons[i].name,
                   persons[i].id, persons[i].gender, persons[i].profession, persons[i].sc.score);
        } else { //如果是老师
            printf("%s\t%d\t%c\t%c\t\t%s\n", persons[i].name,
                   persons[i].id, persons[i].gender, persons[i].profession, persons[i].sc.course);
        }

    }
    return 0;
}