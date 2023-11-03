//
// Created by shkstart on 2023/9/27.
//

//情况1：函数不能够嵌套定义

void func1(){

    //错误的
//    void func2(){
//
//    }


}

//情况2：C语言中，是不支持函数重载的。
//同一个程序中函数不能重名，函数名用来唯一标识一个函数。

int add(int i,int j){
    return i + j;
}

//不能存在
//int add(int i,int j,int k){
//    return i + j + k;
//}

//两种解决方案：
//方案1：
int add1(int i,int j,int k){
    return i + j + k;
}

//方案2：
int triAdd(int i,int j,int k){
    return i + j + k;
}


int main(){

    func1();

    add(10,20);


    return 0;
}