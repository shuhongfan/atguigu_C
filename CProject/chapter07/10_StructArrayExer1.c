//
// Created by shkstart on 2023/10/10.
// ���󣺱�дһ��ͳ��ѡƱ��ϵͳ�������Ⱥ�����ĺ�ѡ��������ͳ�Ƹ��˵ĵ�Ʊ����

#include <stdio.h>
#include <string.h>

#define N 3

//1. ������ѡ�˵Ľṹ�壨����������Ʊ���ĳ�Ա��
struct Person {
    char name[20];
    int count;
};

int main() {

    //2. ������ѡ�˵�����
    struct Person perArr[N] = {{"zhang3", 0},
                               {"li4",    0},
                               {"wang5",  0}};


    //3. ������10��ѡ��ͨ������10�εķ�ʽ����ȡ���Ե�ͶƱ�ˣ�ʹ��scanf�Ӽ��̻�ȡ���ݣ�
    char vote_name[20]; //��¼ͶƱ��˭
    for(int i = 0;i < 10;i++){
        printf("��ҪͶƱ��˭�أ�(zhang3��li4��wang5)\n");
        scanf("%s",vote_name);
        //4. ��ѡ��ͶƱ��ĳ����ѡ��ʱ����Ӧ�ĺ�ѡ�˵�Ʊ��+1
        for(int j = 0;j < N;j++){
            if(strcmp(vote_name,perArr[j].name) == 0){
                perArr[j].count++;
                break;
            }
        }
    }

    //5. ������ѡ�˼���Ʊ��
    printf("���ͳ��:\n");
    for(int i = 0;i < N;i++){
        printf("%s:%d\n",perArr[i].name,perArr[i].count);
    }



    return 0;
}
