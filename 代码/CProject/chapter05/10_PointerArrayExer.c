//
// Created by shkstart on 2023/9/1.
// һά������ָ���ʹ�õ���ϰ1

#include <stdio.h>
#define N 5

int main(){

    //��ϰ������Ԫ�ظ�ֵ������
    int arr[N];

    printf("������%d��ֵ:",N);
    //1. ͨ��ѭ���ķ�ʽ��������Ԫ�ظ�ֵ
    //��ʽ1��
//    for(int i = 0;i < N;i++){
//        scanf("%d",&arr[i]);
//    }
    //��ʽ2��
//    for(int i = 0;i < N;i++){
//        scanf("%d",arr + i);
//    }
    //��ʽ3��
    int *p = &arr[0];
    //��ͬ�� p = arr;
    for(int i = 0;i < N;i++){
        scanf("%d",p + i);
    }

    //2. ͨ��ѭ���ķ�ʽ����������
    //��ʽ1��
//    for(int i = 0;i < N;i++){
//        printf("%d ",arr[i]);
//    }
    //��ʽ2��
//    for(int i = 0;i < N;i++){
//        printf("%d ",*(arr + i));
//    }
    //��ʽ3��
//    p = arr; //��arr[0]�ĵ�ַ����p
//    for(int i = 0;i < N;i++){
//        printf("%d ",*(p + i));
//    }
    //��ʽ4������ڷ�ʽ3�ı���
//    for(int i = 0;i < N;i++){
//        printf("%d ",*(p++));
//    }
    //��
    for(p = arr;p < arr + N;p++){
        printf("%d ",*p);

    }


    printf("\n");


    return 0;
}
