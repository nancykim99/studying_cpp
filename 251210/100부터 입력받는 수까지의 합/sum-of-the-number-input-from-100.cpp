#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum_num = 0;
    for (int i = n; i <= 100; i++) {
        sum_num += i;
    }
    cout << sum_num;
    return 0;
}