#include <iostream>

//void f2(int &x) {
//    x = x + 1;
//}
//
//int main() {
//    int a = 1;
//    f2(a);
//    std::cout << "a = " << a << std::endl; // a = 2
//
//    return 0;
//}

void f(int *&x) {
    x++;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // 将指针指向数组的第一个元素

    std::cout << "Original value: " << *ptr << std::endl;

    f(ptr); // 传递指针给函数，函数将指针移动到下一个元素
    std::cout << "New value: " << *ptr << std::endl;

    return 0;
}
