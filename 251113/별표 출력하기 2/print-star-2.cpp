#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 5; j > 0; i--) {
            cout << '*' << " ";
        }
        cout << "\n";
    }
    return 0;
}