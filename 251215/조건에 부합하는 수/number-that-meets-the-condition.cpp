#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        bool c1 = ((i % 2 == 0) && (i % 4 != 0));
        bool c2 = ((i / 8) % 2 == 0);
        bool c3 = ((i % 7) < 4);
        if (c1 || c2 || c3) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}