//
// Created by shkstart on 2023/10/9.
// ���Խṹ��Ƕ��

#include <stdio.h>
#include <string.h>

struct Name {
    char firstName[50];
    char lastName[50];
};

struct Student {
    int age;
    struct Name name;
    char gender;
} stu1;

int main(){

    stu1.gender = 'M';
    stu1.age = 18;

//    stu1.name.firstName = "Tom"; //����

    //��ʽ1��
//    strcpy(stu1.name.firstName,"����");
//    strcpy(stu1.name.lastName,"��");
    //��ʽ2��
    struct Name name1 = {.firstName = "˼˼",.lastName = "��"};
    stu1.name = name1;

    printf("gender = %c,age = %d,name = [%s,%s]",
           stu1.gender,stu1.age,stu1.name.lastName,stu1.name.firstName);

    return 0;
}
