#include <iostream>
using namespace std;

int main() {
    int b, a;
    cin >> b >> a;
    int i = a;
    while (i <= b) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}