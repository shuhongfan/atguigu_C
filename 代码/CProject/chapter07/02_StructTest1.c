//
// Created by shkstart on 2023/10/9.
// 测试结构体、结构体变量、结构体变量的成员的调用的其它写法


#include <stdio.h>

struct Cat{
    char *name;
    int age;
    char gender;
};

//对应着格式4：声明类型的同时定义变量
struct Student{
    char *name;
    int age;
} stu1,stu2;

//对应着格式5:不指定类型名而直接定义结构体类型变量
struct{  //匿名结构体
    char *name;
    int age;
} t1,t2;

//在格式4的基础上，融合了格式3的写法
struct Person{
    char *name;
    int age;

}per1 = {.name = "Jerry",.age = 12},
per2 = {.name = "Rose",.age = 18};


//对应着格式6：使用 typedef 命令
typedef struct Employee{
    char *name;
    int age;
}Emp;

int main(){

    //格式2：struct 结构体名 结构体变量={初始化数据};
    struct Cat cat1 = {"小黄",2,'M'};

    printf("name = %s,age = %d,gender = %c\n",cat1.name,cat1.age,cat1.gender);

    struct Cat cat2 = {"小黑"};  //没有显式赋值的成员，会被赋值为默认值
    printf("name = %s,age = %d,gender = %c\n",cat2.name,cat2.age,cat2.gender);

    //格式3：struct 结构体名 结构体变量={.成员1=xxx,.成员2=yyy,...};
    struct Cat cat3 = {.gender='F',.age=3,.name="小灰"};
    printf("name = %s,age = %d,gender = %c\n",cat3.name,cat3.age,cat3.gender);

    struct Cat cat4 = {.gender='F',.age=3}; //没有显式赋值的成员，会被赋值为默认值
    printf("name = %s,age = %d,gender = %c\n",cat4.name,cat4.age,cat4.gender);

    //针对于格式4：
    stu1.name = "Tom";
    stu1.age = 12;

    struct Student stu3;

    //针对于格式5：
    t1.name = "张老师";
    t1.age = 40;

    //针对于格式6：
    struct Employee emp1; //并没有关注到typedef的特殊性

    Emp emp2; //使用上了typedef的特殊性
    printf("name = %s,age = %d\n",emp2.name,emp2.age); //注意：在没有给结构体变量的成员赋值的情况下，调用其数据是错误的！


    return 0;
}
