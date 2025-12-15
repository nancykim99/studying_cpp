#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int sumn = 0;
    for (int i = a; i <= b; i++) {
        if ((i % 6 == 0) && (i % 8 != 0)) {
            sumn += i;
        }
    }
    cout << sumn;
    return 0;
}