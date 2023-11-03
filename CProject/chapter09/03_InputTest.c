//
// Created by shkstart on 2023/10/12.
// 说明：将具体的文件中的数据读入到内存中

#include <stdio.h>

int main(){

    //1. 声明文件的具体路径
    char *filePath = "D:\\io\\hello.txt";

    //2. 创建/打开文件
    FILE *file_ptr = fopen(filePath,"r"); //r:读取的操作。


    //3. 将文件中的数据读取到内存中
    //方式1：fscanf()
//    char cBuffer[10];
//    fscanf(file_ptr,"%s",cBuffer); //读取文件中的数据，缓存在cBuffer数组中
//    printf("%s\n",cBuffer);
    //方式2：fgets()
    char cBuffer[100];
//    fgets(cBuffer,100,file_ptr);//读取文件中的数据，缓存在cBuffer数组中
//    printf("%s\n",cBuffer);
    while(fgets(cBuffer,100,file_ptr) != NULL){
        printf("%s",cBuffer);
    }


    //4.关闭文件
    fclose(file_ptr);


    return 0;
}

