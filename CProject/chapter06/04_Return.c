//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

/*
 * return�����ã��� ����������ִ��  �� ���з���ֵ���͵ĺ����У�"return ����ֵ"�ṹ�����Է���һ�������������
 *
 * ע��㣺return�ؼ��ֺ��治�ܱ�дִ����䣬��Ϊ����ִ�С�
 */

void show(int age){

    if(age >= 22){
        printf("�㵽�˷�����������~\n");
    }else{
        printf("�����ٶ�̸̸Ů����~\n");
    }

}

void show1(int age){

    if(age >= 22){
        printf("�㵽�˷�����������~\n");
        return;
//        printf("����䲻��ִ��~\n");
//        int m = 10,n = 20;
    }

    printf("�����ٶ�̸̸Ů����~\n");

}

void printNum(int start,int limit){
    for(int i = start;i <= limit;i++){
        if(i % 5 == 0){
            return;
            //printf("�������Ʊ��һ�����н�");
        }
        printf("i = %d\n", i);
    }
    //printf("over!\n", i);
}

int main(){
//    int age = 20;
//    age = 23;
//    show(age);
//    show1(age);

    printNum(1,40);

    return 0;
}