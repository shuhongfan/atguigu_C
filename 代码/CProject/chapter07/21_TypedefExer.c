//
// Created by shkstart on 2023/10/11.
// typedef��ʹ�þ���

#include <stdio.h>
#define N 3

//����
int add(int m ,int n){
    int sum = m + n;
    return sum;
}

//����
char str[N][30] = {"�й�Ƚ���","www.atguigu.com","010-56253825"};

//ʹ��typedef
typedef int (*PTR_FUNC)(int,int);

typedef char (*PTR_ARR)[30];

int main(){

    //���ú�����ʹ�ú���ָ��
    int (*ptr_add)(int,int);
    ptr_add = &add;
    int sum = (*ptr_add)(10,20);
    printf("sum = %d\n",sum);

    //�������飺ʹ������ָ��
//    char *ptr_arr[30]; //������һ��ָ������
    char (*ptr_arr)[30]; //������һ������ָ��,ָ���˳���Ϊ30��char������
    ptr_arr = str; //��str[0]���׵�ַ����ptr_arrָ��

    for(int i = 0;i < N;i++){
        printf("str[%d]:%s\n",i,*(ptr_arr + i));
    }


    //##########ʹ��typedef���������ͽ��е���##############
    //���ú���
    PTR_FUNC ptr_add1 = &add;
    int sum1 = (*ptr_add1)(100,200);
    printf("sum1 = %d\n",sum1);

    //��������
    PTR_ARR ptr_arr1 = str;//��str[0]���׵�ַ����ptr_arr1����
    for(int i = 0;i < N;i++){
        printf("str[%d]:%s\n",i,*(ptr_arr1 + i));
    }


    return 0;
}