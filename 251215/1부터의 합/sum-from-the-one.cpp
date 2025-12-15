#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumn = 0;
    for (int i = 1; i <= 100; i++) {
        sumn += i;
        if (sumn >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}