//
// Created by shkstart on 2023/10/12.
//
//��ϰ����̬�������飬����5��ѧ���ĳɼ�������һ���������ɼ�����60 �ֵģ�������ϸ�ĳɼ���

#include <stdio.h>
#include <stdlib.h>

#define N 5


void checkScore(int *ptr){
    printf("����60�ֵĳɼ��У�\n");
    for(int i = 0;i < N;i++){
        if(ptr[i] < 60){
            printf("%d\n",ptr[i]);
        }
    }
}

int main(){

    //1. ʹ��malloc()������̬�������ڴ�ռ䣨�ѿռ��У�����Ӧ��int���͵ĳ���Ϊ5������
    int *ptr_score;
    ptr_score = (int *)malloc(N * sizeof(int));

    if(ptr_score != NULL){

        //2. ������Ԫ�ظ�ֵ��ʹ��scanf()�����Ӽ��̻�ȡ
        printf("������%d���ɼ���\n",N);
        for(int i = 0;i < N;i++){
            scanf("%d",(ptr_score + i));
        }

        //3. ����һ���������ں������жϳɼ�����60�������������60�ֵĳɼ����
        checkScore(ptr_score);

        //4. �ͷ�����Ŀռ�
        free(ptr_score);
    }



    return 0;
}