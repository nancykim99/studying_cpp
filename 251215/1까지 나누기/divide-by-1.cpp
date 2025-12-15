#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = n;
    int i = 1;
    while (a > 1) {
        a /= i;
        if (a <= 1) {
            break;
        }
        i++;
    }
    cout << i;
    return 0;
}