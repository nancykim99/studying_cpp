#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sumn = 0;
    if (a > b) {
        for (int i = b; i <= a; i++) {
            if (i % 5 == 0) {
                sumn += i;
            }
        }
    } else if (a < b) {
        for (int i = a; i <= b; i++) {
            if (i % 5 == 0) {
                sumn += i;
            }
        }
    } else {
        sumn = a;
    }
    cout << sumn;
    return 0;
}