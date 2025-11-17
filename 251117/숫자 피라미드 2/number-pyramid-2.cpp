#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num_total = 0;
    for (int i = 1; i <= 7; i++) {
        num_total += i;
    }
    for (int i = 1; i <= num_total; i++) {
        for (int j = 1; j <= N; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}