//
// Created by shkstart on 2023/10/10.
// ��������һ���༶��ѧ����Ϣ(����id��name��gender��score)��
// ����ѧϰ�ɼ�����ȫ��ƽ���ɼ���ѧ���ҳ���������ⲿ��ѧ���������ͳɼ���


#include <stdio.h>

#define N 5

//1. ����һ��ѧ���Ľṹ��
struct Student{
    int id;
    char name[20];
    char gender;
    int score;
};

int main(){

    //2. ����ѧ���ṹ�������
    struct Student stuArr[N];

    int sumScore = 0; //��¼�ܳɼ�

    //3. ʹ��ѭ���ķ�ʽ����������Ԫ�أ���ÿ��ѧ���ĳ�Ա��ֵ(id��name��gender��score),ʹ��scanf�Ӽ��̻�ȡ����
    for(int i = 0;i < N;i++){
        printf("������ѧ������Ϣ(id��name��gender��score)��\n");
        scanf("%d %s %c %d",&stuArr[i].id,stuArr[i].name,&stuArr[i].gender,&stuArr[i].score);
        //4. ����༶���ܳɼ�
        sumScore += stuArr[i].score;
    }
    //5. ����༶��ƽ���ɼ�
    double avgScore = (double)sumScore / N;
    printf("avgScores = %.2lf\n",avgScore);

    //6. ʹ��ѭ���ķ�ʽ����������Ԫ�أ���ȡ�ɼ����ڰ༶ƽ���ɼ���ѧ�������ͳɼ�������ӡ
    for(int i = 0;i < N;i++){
        if(stuArr[i].score > avgScore){
            printf("%s : %d\n",stuArr[i].name,stuArr[i].score);
        }
    }


    return 0;
}
