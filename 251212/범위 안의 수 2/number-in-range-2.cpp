#include <iostream>
using namespace std;

int main() {
    int sumn = 0;
    double cnt = 0;
    cout << fixed;
    cout.precision(1);
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        if ((n >= 0) && (n <= 200)) {
            sumn += n;
            cnt ++;
        }
    }
    cout << sumn << " " << sumn / cnt;
    return 0;
}