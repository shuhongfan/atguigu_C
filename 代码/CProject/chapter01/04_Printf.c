//
// Created by shkstart on 2023/8/24.
// ����printf()��ʹ��˵��

#include <stdio.h>

int main(){

    printf("helloworld\n");

    /*
     * 1. printf()�ı�׼��ʽ
     *  printf(��ʽ�����ַ���,����б�);
     *
     *  ˵������ʽ�����ַ�����ռλ���ĸ��� �� ����б��б��������ĸ�����ͬ������Ҫһһ��Ӧ��
    */

    printf("num is %d\n",5);

    int id = 10;
    printf("id = %d\n",id);

    printf("Tom's score = %d,level = %c\n",90,'A');

    /*
     * 2. ������ռλ����
     *   %c:�ַ�����
     *   %d:ʮ���Ƶ�int����   ����%i��
     *   %ld��ʮ���Ƶ�long����
     *   %f: �������ͣ�float��
     *   %lf: �������ͣ�double��
     *   %s: �ַ���
     *   %u: ʮ���Ƶ��޷��ŵ�����
     *   %p: ָ��
     *
     * */
    //������
    printf("There are %d students\n", 5);   //�����There are 5 students

    char level = 'A';
    printf("this score level is:%c\n",level); //�����this score level is:A

    //3. �����ʽ˵��
    //�� �޶����
    printf("num is %10d\n",123);  //Ĭ�����Ҷ����

    //�� �޸�Ϊ�����
    printf("num is %-10d\n",123);

    //�� ��ʾ������
    printf("num id %+d\n",+10);
    printf("num id %+d\n",-10);


    //���޶�С��λ��
    printf("float is %.2f\n",12.355678);
    printf("float is %6.2f\n",12.345);

    //��ϰ
    float f = 3.1415926535f;    // �����ȸ�����
    double d = 3.1415926535;  // ˫���ȸ�����

    // ʹ�� %f ��������ȸ�����
    printf("Float: %f\n", f);  //Float: 3.141593
    // ʹ�� %lf ���˫���ȸ�����
    printf("Double: %lf\n", d); //Double: 3.141593

    // ʹ�� %f ��������ȸ�����
    printf("Float: %.8f\n", f);  //Float: 3.14159274
    // ʹ�� %lf ���˫���ȸ�����
    printf("Double: %.8lf\n", d); //Double: 3.14159265

    return 0;
}
