//
// Created by shkstart on 2023/8/25.
// ��֧�ṹ1��if-else����ϰ

#include <stdio.h>

int main() {
    /*
     * ��ϰ1��
     * ��дһ�������ж�ĳ������Ƿ�Ϊ���ꡣ���������������֮һ���������꣺
        (1) year �� 400 ���������� year%400==0
        (2) �ܱ�4�����������ܱ�100������year % 4 == 0 && year % 100 != 0
     *
     * */
//    printf("enter year:");
//    int year;
//    scanf("%d",&year);
//
//    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
//        printf("%d is a leap year",year);
//    }else{
//        printf("%d is not a leap year",year);
//    }


    /*
     * ��ϰ2����Ϥif-else��Ƕ��ʹ��
     * ��Ʊϵͳ�����ݵ��������·ݺ����䣬��ӡƱ�ۡ�Ҫ���·ݺ�����Ӽ��̻�ȡ���롣

        4_10 ������
            ���ˣ�18-60����60
            ��ͯ��< 18��   :  ���
            ���ˣ�> 60��   :  1/3
        ������
            ����   :  40
            ����   :  20
     *
     *
     * */
    int month;//�·�
    printf("�������·ݣ�");
    scanf("%d",&month);

    int age;
    printf("���������䣺");
    scanf("%d",&age);

    double price = 60.0; //Ĭ��Ʊ��

    if(month >= 4 && month <= 10){ //����
        if(age < 18){
            price /= 2;
        }else if(age > 60){
            price /= 3;
        }
//        else{
//            //���ˣ���ԭƱ��
//        }
    }else{  //����
        if(age >= 18){
            price = 40;
        }else{
            price = 20;
        }

    }

    printf("Ʊ��Ϊ��%.2lf\n",price);



    return 0;
}
