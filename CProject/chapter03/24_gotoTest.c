//
// Created by shkstart on 2023/8/28.
// ����goto�ؼ��ֵ�ʹ��


#include <stdio.h>

int main(){
    //����1��
//    label:printf("hello\n");
//    goto label;

    //����2��
//    int i = 1;
//    label:printf("hello-%d\n",i);
//    i++;
//    goto label;

    //����3��¼��ѧ���ɼ���������ѧ����ƽ���֡�������-1ʱ���������
    //��ʽ1��ʹ��while(1) \ for(;;)
    //��ʽ2��ʹ��goto
    int score ; //��¼ÿ��ѧ���ķ���
    int sum = 0; //��¼ѧ�����ܷ�
    int i = 0; //��¼�ڼ���ѧ��
    next:printf("�������%d��ѧ���ĳɼ���",i+1);
    scanf("%d",&score);
    if(score != -1){
        sum += score;
        i++;
        goto next;
    }
    if(i != 0)
        printf("%d��ѧ����ƽ���ɼ���%d\n",i,sum / i);

    return 0;
}
