//
// Created by shkstart on 2023/10/8.
// ���Իص�������ʹ��

//����������a��b�����û�����1,2��3��������1������͸���a��b�еĴ��ߣ�
// ����2���͸���a��b�е�С�ߣ�����3������a��b֮�͡�

#include <stdio.h>

//�ص�����
int fun(int x,int y,int (*p)(int,int)){
    //ͨ������ָ�����ָ��ĺ���
    int result = (*p)(x,y);
    return result;
}

int max(int x,int y){
    int result = (x > y)? x : y;

    printf("max = ");
    return result;
}

int min(int x,int y){
    int result = (x < y)? x : y;

    printf("min = ");
    return result;
}

int sum(int x,int y){
    int result = x + y;

    printf("sum = ");
    return result;
}

int main(){
    int a = 10,b = 20;

    int m;
    printf("������һ������(1,2��3):");
    scanf("%d",&m);
    int result;
    switch(m){
        case 1:
            result = fun(a,b,&max);
            break;
        case 2:
            result = fun(a,b,min);
            break;
        case 3:
            result = fun(a,b,sum);
            break;
    }

    printf("%d\n",result);

    return 0;
}
