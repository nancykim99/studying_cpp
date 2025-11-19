#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double a = 9.2;
    double ft_cm = 30.48;
    double mi_cm = 160934;
    double b = 1.3;
    cout.precision(1);
    cout << a << "ft = " << a * ft_cm << "cm";
    cout << endl;
    cout << b << "mi = " << b * mi_cm << "cm";
    return 0;
}