#include <iostream>
using namespace std;

int main() {
    int a = 13;
    cout << fixed;
    double b = 0.165;
    double c = a * b;
    cout.precision(6);
    cout << a << " * " << b << " = " << c;
    return 0;
}