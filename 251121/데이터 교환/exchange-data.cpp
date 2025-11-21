#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
    cout << a << endl << b << endl << c;
    return 0;
}