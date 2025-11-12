#include <iostream>

using namespace std;

int main() {
    // 언제 끝날지 모르므로
    // 계속 반복합니다.
    while(1) {
        // 변수를 선언하고 입력을 받습니다.
        int n;
        cin >> n;
        
        // 입력받은 값이 n이면 종료합니다.
        if(n == 0)
            break;
        
        // n이 0이 아닌 경우에는, 계속 값을 출력해줍니다.
        cout << n << endl;
    }
    return 0;
}
