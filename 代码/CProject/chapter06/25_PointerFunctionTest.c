//
// Created by shkstart on 2023/10/8.
// ����ָ�뺯����ʹ��

#include <stdio.h>
#include <string.h>

//��ȡ�����ַ����нϳ����Ǹ��ַ���
char *getMaxLengthStr(char *str1, char *str2) {

    printf("str1�ĳ�����%d,str2�ĳ�����%d\n",strlen(str1),strlen(str2));

    if(strlen(str1) > strlen(str2)){
        return str1;
    }else{
        return str2;
    }


}

int main() {

    char str1[30],str2[30];
    printf("�������1���ַ���:");
    gets(str1);
    printf("�������2���ַ���:");
    gets(str2);

    char *maxStr;
    maxStr = getMaxLengthStr(str1,str2);
    printf("�ϴ���ַ����ǣ�%s\n",maxStr);


    return 0;
}
