#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    double average = sum / 2;
    cout << fixed;
    cout.precision(2);
    cout << sum << " " << average;
    return 0;
}