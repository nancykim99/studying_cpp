#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        if (i % 3 == 0) {
            cout << 0 << " ";
        } else {
            string s = to_string(i);
            if (s.find("3") != string::npos) {
    	        cout << 0 << " ";
            } else if (s.find("6") != string::npos) {
    	        cout << 0 << " ";
            } else if (s.find("9") != string::npos) {
    	        cout << 0 << " ";
            }
            else {
                cout << i << " ";
            }
        }
        i++;
    }
    return 0;
}