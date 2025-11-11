#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B) {
        if (B > C) {
            cout << B;
        } else if (C > B) {
            if (A > C) {
                cout << C;
            } else {
                cout << A;
            }
        } 
    } else if (B > A) {
        if (A > C) {
            cout << A;
        } else if (C > A) {
            if (B > C) {
                cout << C;
            } else {
                cout << B;
            }
        }
    }
    return 0;
}