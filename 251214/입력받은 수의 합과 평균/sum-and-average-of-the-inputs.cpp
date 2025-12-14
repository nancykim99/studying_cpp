#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double n;
    int sumn=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        sumn += a;
    }
    double avg;
    cout << fixed;
    cout.precision(1);
    avg = sumn/n;
    cout << sumn<< " "<< avg;
    return 0;
}