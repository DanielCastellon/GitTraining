#include <iostream>

int addTwoNumbers(int a, int b, int& c) {
    c = a + b;
}

int main() {
    int a = 5;
    int b = 5;
    int c = addTwoNumbers(a,b);
    std::cout << c;
    return 0;
}
