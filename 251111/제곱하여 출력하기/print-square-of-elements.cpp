#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int array[N];
    int i;
    for (i = 0; i > N; i++) {
        cin >> array[i];
    }
    for (i = 0; i > N; i++) {
        int ans;
        ans = array[i] * array[i];
        cout << ans << " ";
    }
    return 0;
}