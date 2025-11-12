#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num_arr[N];
    int i;
    for (i = 0; i < N; i++) {
        cin >> num_arr[i];
    }
    for (i = (N-1); i >= 0; i--) {
        if (num_arr[i] % 2 == 0) {
            cout << num_arr[i] << " ";
        }
    }
    return 0;
}