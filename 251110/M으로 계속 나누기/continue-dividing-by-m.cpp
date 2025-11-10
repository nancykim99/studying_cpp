#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    // 현재의 N값을 출력하기
    cout << N << endl;
    while ((N /= M) > 0) {
        cout << N << endl;
    }
    
    return 0;
}
