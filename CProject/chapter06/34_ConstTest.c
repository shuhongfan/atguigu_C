//
// Created by shkstart on 2023/10/9.
// 使用const修饰变量，即为一个常量

//情况1：常量的情况
void func1() {
    const int num = 10;
//    num++; //报错
}

//情况2：指向常量的指针
void func2() {

    int num = 10;

    const int *ptr = &num;

//    *ptr = 20; //报错

    int num1 = 20;
    ptr = &num1; //没有报错

}

//情况3：常量指针
void func3() {
    int num1 = 10;

    int *const ptr = &num1;

    int num2 = 20;
//    ptr = &num2; //报错
}

void func4(){
    int num1 = 10;

    const int * const ptr = &num1;

//    *ptr = 20;//报错

    int num2 = 20;
//    ptr = &num2; //报错
}

//情况4：常量参数
void func5(const int num){
//    num = 10; //报错
}

//情况5：常量数组
void func6(){
    const int arr[] = {1,2,3,4,5};

//    arr[0] = 10; //报错
//    arr[1] = 20; //报错


}


