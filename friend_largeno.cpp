#include <iostream>
using namespace std;
class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}
 friend int findLarger(const Number& num1, const Number& num2);
};

int findLarger(const Number& num1, const Number& num2) {
    return (num1.num > num2.num) ? num1.num : num2.num;
}

int main() {
    Number n1(10);
    Number n2(20);

    int larger = findLarger(n1, n2);

    cout << "The larger number is: " << larger << endl;

    return 0;
}