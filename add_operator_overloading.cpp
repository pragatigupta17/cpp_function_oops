#include <iostream>
using namespace std;
class Number {
private:
    int num;
public:
    Number(int n = 0) : num(n) {}
    Number operator+(const Number& obj) {
        Number result;
        result.num = this->num + obj.num; 
        return result;
    }
    void display() {
        cout << "Number: " << num << endl;
    }
};
int main() {
    Number n1(10);
    Number n2(20);
    Number n3 = n1 + n2;
    n3.display();
    return 0;
}