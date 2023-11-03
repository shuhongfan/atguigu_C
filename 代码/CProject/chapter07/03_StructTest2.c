//
// Created by shkstart on 2023/10/9.
// 测试结构体嵌套

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

//    stu1.name.firstName = "Tom"; //报错

    //方式1：
//    strcpy(stu1.name.firstName,"三三");
//    strcpy(stu1.name.lastName,"张");
    //方式2：
    struct Name name1 = {.firstName = "思思",.lastName = "李"};
    stu1.name = name1;

    printf("gender = %c,age = %d,name = [%s,%s]",
           stu1.gender,stu1.age,stu1.name.lastName,stu1.name.firstName);

    return 0;
}
