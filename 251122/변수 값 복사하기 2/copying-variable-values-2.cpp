#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    c = a = b;
    cout << a << " " << b << " " << c;
    return 0;
}