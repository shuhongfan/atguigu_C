//
// Created by shkstart on 2023/8/26.
// ����"����"ѭ���ṹ

/*
 * 1. ���"����"ѭ����ʽ��`while(1)` , `for(;;)`
 * 2. - �����У���ʱ����ȷ����Ҫѭ�����ٴΣ���Ҫ����ѭ�����ڲ�ĳЩ������������ѭ���Ľ�����ʹ��break����
 *    - �����ѭ���ṹ������ֹ���򹹳�����ѭ����������Ҫ���������ѭ����
 * */
#include <stdio.h>

int main(){

    /*
     * �Ӽ��̶��������ȷ�������������ж϶���������͸����ĸ���������Ϊ0ʱ��������
     * */
    int number; //��¼�û����������

    int positiveNumber = 0;//��¼�����ĸ���
    int negativeNumber = 0;//��¼�����ĸ���

    while(1){//for(;;){
        printf("������һ������(����0ʱ����):");
        scanf("%d",&number);

        if(number > 0){
            positiveNumber++;
        }else if(number < 0){
            negativeNumber++;
        }else{
            break;
        }
    }

    printf("�����ĸ���Ϊ��%d\n",positiveNumber);
    printf("�����ĸ���Ϊ��%d\n",negativeNumber);

    return 0;
}
