#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int area = n * n;
    cout << area << endl;
    if (n < 5) {
        cout << "tiny";
    }
    return 0;
}