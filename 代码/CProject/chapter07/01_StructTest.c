//
// Created by shkstart on 2023/10/9.
// 第1步：创建或声明结构体，即为声明结构体的内部成员
// 第2步：声明结构体变量。格式：struct 结构体类型名称 结构体变量名;
// 第3步：如何调用结构体变量的成员。格式：结构体变量名.成员名 [= 常量或变量值]



#include <string.h>
#include <stdio.h>

//声明结构体
//结构体：学生
struct Student{
    //内部声明结构体的成员
    int id; //学号
    char name[30]; //姓名
    char gender; //性别
    int age; //年龄
    char address[50]; //家庭住址

};

//结构体：猫
struct Cat{
    char name[20]; //名字
    int age; //年龄
    char color[30]; //颜色

};

//结构体：人
struct Person{
    char name[20];
    int age;
    char gender;
    double weight;
};

//结构体：通讯录
struct Contacts{
    char name[20];
    int year;
    int month;
    int day;
    char email[50];
    char phoneNumber[20];

};


//声明结构体变量
int main(){
    //复习
    int num;
    //格式：struct 结构体类型名称 结构体变量名;
    struct Student stu1;

    struct Cat cat1;

    //如何调用结构体变量的成员
    //格式：结构体变量名.成员名 [= 常量或变量值]
    stu1.id = 1001;
//    stu1.name = "Tom"; //针对于数组，不能重新赋值
    strcpy(stu1.name,"Tom"); //将数组的元素赋值为Tom，并没有给数组重新赋值
    stu1.gender = 'M';
    stu1.age = 12;
    strcpy(stu1.address,"北京市海淀区中关村1街");

    printf("id = %d,name = %s,gender = %c,age = %d,address = %s\n",
           stu1.id,stu1.name,stu1.gender,stu1.age,stu1.address);

    //另例：
    cat1.age = 2;
    strcpy(cat1.name,"小黄");
    strcpy(cat1.color,"橘色");

    return 0;
}
