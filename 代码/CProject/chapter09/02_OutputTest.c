//
// Created by shkstart on 2023/10/12.
// ˵�������ڴ��е�����д����������ļ���

#include <stdio.h>

int main(){

    //1. �����ļ��ľ���·��
    char *filePath = "D:\\io\\hello.txt";

    //2. ����/���ļ�
//    FILE *file_ptr = fopen(filePath,"w"); //w:д���Ĳ�����
    FILE *file_ptr = fopen(filePath,"a"); //a:׷�ӵĲ�����

    //3. ���ڴ��е�����д�����ļ���
    //��ʽ1��ʹ��fputs():
//    fputs("hello world\n",file_ptr);
//    fputs("hello beijing\n",file_ptr);
//    fputs("hello shanghai\n",file_ptr);
    //��ʽ2��fprintf()
    fprintf(file_ptr,"��� ����\n");
    fprintf(file_ptr,"��� ����\n");

    //4.�ر��ļ�
    fclose(file_ptr);

    printf("����д���ɹ���");


    return 0;
}
