//
// Created by shkstart on 2023/10/9.
// ���Խṹ�塢�ṹ��������ṹ������ĳ�Ա�ĵ��õ�����д��


#include <stdio.h>

struct Cat{
    char *name;
    int age;
    char gender;
};

//��Ӧ�Ÿ�ʽ4���������͵�ͬʱ�������
struct Student{
    char *name;
    int age;
} stu1,stu2;

//��Ӧ�Ÿ�ʽ5:��ָ����������ֱ�Ӷ���ṹ�����ͱ���
struct{  //�����ṹ��
    char *name;
    int age;
} t1,t2;

//�ڸ�ʽ4�Ļ����ϣ��ں��˸�ʽ3��д��
struct Person{
    char *name;
    int age;

}per1 = {.name = "Jerry",.age = 12},
per2 = {.name = "Rose",.age = 18};


//��Ӧ�Ÿ�ʽ6��ʹ�� typedef ����
typedef struct Employee{
    char *name;
    int age;
}Emp;

int main(){

    //��ʽ2��struct �ṹ���� �ṹ�����={��ʼ������};
    struct Cat cat1 = {"С��",2,'M'};

    printf("name = %s,age = %d,gender = %c\n",cat1.name,cat1.age,cat1.gender);

    struct Cat cat2 = {"С��"};  //û����ʽ��ֵ�ĳ�Ա���ᱻ��ֵΪĬ��ֵ
    printf("name = %s,age = %d,gender = %c\n",cat2.name,cat2.age,cat2.gender);

    //��ʽ3��struct �ṹ���� �ṹ�����={.��Ա1=xxx,.��Ա2=yyy,...};
    struct Cat cat3 = {.gender='F',.age=3,.name="С��"};
    printf("name = %s,age = %d,gender = %c\n",cat3.name,cat3.age,cat3.gender);

    struct Cat cat4 = {.gender='F',.age=3}; //û����ʽ��ֵ�ĳ�Ա���ᱻ��ֵΪĬ��ֵ
    printf("name = %s,age = %d,gender = %c\n",cat4.name,cat4.age,cat4.gender);

    //����ڸ�ʽ4��
    stu1.name = "Tom";
    stu1.age = 12;

    struct Student stu3;

    //����ڸ�ʽ5��
    t1.name = "����ʦ";
    t1.age = 40;

    //����ڸ�ʽ6��
    struct Employee emp1; //��û�й�ע��typedef��������

    Emp emp2; //ʹ������typedef��������
    printf("name = %s,age = %d\n",emp2.name,emp2.age); //ע�⣺��û�и��ṹ������ĳ�Ա��ֵ������£������������Ǵ���ģ�


    return 0;
}
