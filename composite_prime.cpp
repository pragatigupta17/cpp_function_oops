#include <iostream>
using namespace std;
class PrimeChecker {
private:
    int num;
public:
   PrimeChecker(int n = 0) : num(n) {}
    bool isPrime() {
        if (num <= 1) return false; 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false; 
        }
        return true; 
    }
};
class Number {
private:
    int num;
    PrimeChecker checker; 
public:
    Number(int n = 0) : num(n), checker(n) {}
    void checkPrime() {
        if (checker.isPrime()) {
            cout << num << " is a prime number." << "\n";
        } else {
            cout << num << " is not a prime number." <<"\n";
        }
    }
};
int main() {
    Number n1(7);
    Number n2(10);
    n1.checkPrime(); // Output: 7 is a prime number.
    n2.checkPrime(); // Output: 10 is not a prime number.

    return 0;
}