#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cur = 1;  // 출력할 현재 숫자

    for (int i = 1; i <= N; i++) {        // i는 행 번호 (1~N)
        for (int j = 0; j < i; j++) {     // 각 행에서 i개 출력
            cout << cur << " ";
            cur++;
        }
        cout << "\n";
    }

    return 0;
}