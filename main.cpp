#include <iostream>

void addTwoNumbers(int a, int b, int& c) {
    c = a + b;
}

void DaCaPrintName()
{
	printf("DaCa print");
}


int main() {
    int a = 5;
    int b = 5;
    int c = addTwoNumbers(a,b);
    std::cout << c;
    std::cout << DacaPrintName();
    return 0;
}
