//
// Created by shkstart on 2023/8/26.
// ATMȡ���������ϰ
/*
 * ��������balance����ʼ��Ϊ0�����Ա�ʾ�����˻���������ͨ��ATM������ʵ�ִ�ȡ��ȹ��ܡ�

    =========ATM========
       1�����
       2��ȡ��
       3����ʾ���
       4���˳�
    ��ѡ��(1-4)��
 * */

#include <stdio.h>

int main(){

    double balance = 0.0; //���

    int selection;//���ڼ�¼�û���ѡ��

    int isFlag = 1;//���ڿ���ѭ�����˳�

    double addMoney,minusMoney; //�ֱ��ʾ����ȡ��Ķ��

    do{
        printf("=========ATM========\n");
        printf("      1�����\n");
        printf("      2��ȡ��\n");
        printf("      3����ʾ���\n");
        printf("      4���˳�\n");
        printf("     ��ѡ��(1-4)��");

        scanf("%d",&selection);

        switch(selection){
            case 1:
                printf("��������Ķ��:");
                scanf("%lf",&addMoney);
                if(addMoney > 0){
                    balance += addMoney;
                    printf("���ɹ�\n");
                }else{
                    printf("����������ݷǷ�!\n");
                }
                break;
            case 2:
                printf("������ȡ��Ķ��:");
                scanf("%lf",&minusMoney);
                if(minusMoney > 0 && balance >= minusMoney){
                    balance -= minusMoney;
                    printf("ȡ��ɹ�\n");
                }else{
                    printf("����������ݷǷ�������\n");
                }
                break;
            case 3:
                printf("�����˻����Ϊ%.2lf\n",balance);
                break;
            case 4: //�˳�
                isFlag = 0;
                printf("��ӭ�´ι���^_^");
                break;
            default:
                printf("������ѡ��\n");

        }


    }while(isFlag);


    return 0;
}
