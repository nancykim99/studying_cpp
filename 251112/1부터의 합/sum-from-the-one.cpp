#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum_num = 0;
    for (int i = 1; i <= 100; i++) {
        sum_num += i;
        if (sum_num >= N) {
            cout << i;
            break;
        }
    }
    return 0;
}