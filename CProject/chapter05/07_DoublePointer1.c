//
// Created by shkstart on 2023/9/1.
// ����ָ�����ϰ

#include <stdio.h>
#include <malloc.h>

int main(){

    //ʹ��malloc()����������ά����
    /*
     * ��ϰ��ʹ��malloc()��������һά����
     * int length = 5;
     * int *arr = (int *)malloc(length * sizeof(int));
     *
     * */

    //1. �Ӽ��̻�ȡrow �� column
    int row,column;
    printf("��һά���ȣ�");
    scanf("%d",&row);
    printf("�ڶ�ά���ȣ�");
    scanf("%d",&column);

    //2. ��ʼ���������
    int **arr = (int **)malloc(row * sizeof(int *));
    for(int i = 0;i < row;i++){
        //3. ��ʼ���ڲ����飬�����ڲ������Ԫ�ظ�ֵ
        arr[i] = (int *)malloc(column * sizeof(int));

        for(int j = 0;j < column;j++){
            arr[i][j] = 1;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //��ȡ����ʹ�ô˶�ά����
    //.....

    //ʹ�����Ժ󣬻��մ�����
    free(arr);

    return 0;
}
