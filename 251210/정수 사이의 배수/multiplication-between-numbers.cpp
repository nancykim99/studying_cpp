#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double snum = 0;
    double cnt = 0;
    for (int i = a; i <= b; i++) {
        if ((i % 5 == 0) || (i % 7 == 0)) {
            snum += i;
            cnt++;
        }
    }
    double savg = snum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << int(snum) << " " << savg;
    return 0;
}