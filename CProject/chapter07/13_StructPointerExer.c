//
// Created by shkstart on 2023/10/10.
/*
 * ��1����дһ��Dog�ṹ�壬����name(char[10])��age(int)��weight(double)����

 ��2����дһ��say�����������ַ���������������Ϣ�а������г�Աֵ��

 ��3����main�����У�����Dog�ṹ�����������say�����������ý����ӡ�����
 */

#include <stdio.h>
#include <string.h>


struct Dog {
    char name[10];
    int age;
    double weight;
};

//��ʽ1��
char *say(struct Dog dog) {
    static char info[100]; //��Ҫ���ֲ�����info����Ϊstatic�ģ�ȷ����say���������Ժ󣬲�Ҫ���١�

    sprintf(info, "Name: %s, Age: %d, Weight: %.2lf", dog.name, dog.age, dog.weight);

//    strcpy(dog.name,"С��");

    return info;
}

//��ʽ2��
char *say1(struct Dog *dog_ptr) {
    static char info[100]; //��Ҫ���ֲ�����info����Ϊstatic�ģ�ȷ����say���������Ժ󣬲�Ҫ���١�

    sprintf(info, "Name: %s, Age: %d, Weight: %.2lf", (*dog_ptr).name, (*dog_ptr).age, (*dog_ptr).weight);

//    strcpy((*dog_ptr).name,"С��");

    return info;
}

int main() {
    //�����ṹ���������ʼ�����ڲ��ĳ�Ա
    struct Dog myDog;
    strcpy(myDog.name, "���");
    myDog.age = 2;
    myDog.weight = 2.3;

    char *result = say(myDog);
    printf("info = %s\n",result);

//    printf("name = %s\n",myDog.name);


    char *result1 = say1(&myDog);
    printf("info = %s\n",result1);

//    printf("name = %s\n",myDog.name);

    return 0;
}