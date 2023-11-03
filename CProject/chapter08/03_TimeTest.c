//
// Created by shkstart on 2023/10/12.
//
#include <stdio.h>
#include <time.h> //��ͷ�ļ��У��������ں�ʱ����صĺ���

//����test����������ִ�л���ʱ��
void test() {
    int i = 0;
    int sum = 0;
    int j = 0;
    for (i = 0; i < 10000000; i++) {
        sum = 0;
        for (j = 0; j < 100; j++) {
            sum += j;
        }
    }
}

int main() {
    printf("��������...\n");

    time_t start_t;
    //�ȵõ�ִ��testǰ��ʱ��
    time(&start_t); //��ȡ��ǰʱ��

    test(); //ִ��test

    time_t end_t;
    //�ٵõ�ִ��test���ʱ��
    time(&end_t); //��ȡ��ǰʱ��

    double diff_t; //���ʱ���
    diff_t = difftime(end_t, start_t); //ʱ������ ent_t - start_t


    //Ȼ��õ�����ʱ�����Ǻ��õ�ʱ��
    printf("%d\n",start_t); //1697026306
    printf("%d\n",end_t); //1697026308
    printf("ִ��test()���� ������%.2f ��\n", diff_t); //ִ��test()���� ������2.00 ��

    //��ȡʱ���Ӧ���ַ����ı�ʾ
    char * startTimeStr = ctime(&start_t);
    printf("%s\n",startTimeStr); //Wed Oct 11 20:11:48 2023

    return 0;
}