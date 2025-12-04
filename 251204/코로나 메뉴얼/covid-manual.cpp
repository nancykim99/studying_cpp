#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        char yn;
        int t;
        cin >> yn >> t;
        char option = 'Z';
        if (yn == 'Y') {
            if (t >= 37) {
                option = 'A';
            } else {
                option = 'C';
            }
        } else {
            if (t >= 37) {
                option = 'B';
            } else {
                option = 'D';
            }
        }
        if (option == 'A') {
            cnt += 1
        }
    }
    if (cnt >= 2) {
        cout << 'E';
    } else {
        cout << 'N';
    }
    return 0;
}