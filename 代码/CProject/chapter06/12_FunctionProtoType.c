//
// Created by shkstart on 2023/9/27.
//

//声明函数的原型
void func1();
void func2();
int add(int,int);

int main() {
    func1();
    func2();

    add(10,20);

    return 0;
}

void func1() {
    //...
}
void func2() {
    //...
}

int add(int i,int j){
    return i + j;
}