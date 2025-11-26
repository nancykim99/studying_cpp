#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans;
    if (a > b) {
        ans = a - b;
    } else {
        ans = b - a;
    }
    cout << ans;
    return 0;
}