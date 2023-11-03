//
// Created by shkstart on 2023/10/12.
// 说明：将内存中的数据写出到具体的文件中

#include <stdio.h>

int main(){

    //1. 声明文件的具体路径
    char *filePath = "D:\\io\\hello.txt";

    //2. 创建/打开文件
//    FILE *file_ptr = fopen(filePath,"w"); //w:写出的操作。
    FILE *file_ptr = fopen(filePath,"a"); //a:追加的操作。

    //3. 将内存中的数据写出到文件中
    //方式1：使用fputs():
//    fputs("hello world\n",file_ptr);
//    fputs("hello beijing\n",file_ptr);
//    fputs("hello shanghai\n",file_ptr);
    //方式2：fprintf()
    fprintf(file_ptr,"你好 世界\n");
    fprintf(file_ptr,"你好 北京\n");

    //4.关闭文件
    fclose(file_ptr);

    printf("数据写出成功！");


    return 0;
}
