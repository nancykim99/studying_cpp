#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    while (flag == true) {
        if (flag == false) {
            break;
        }
        int n;
        cin >> n;
        if (n != 1 || n != 2 || n!=3 || n!=4) {
            cout << "Vacancy";
            flag = false;
        } else if (n==1) {
            cout << "John" << endl;
        } else if (n==2) {
            cout << "Tom" << endl;
        } else if (n==3) {
            cout << "Paul" << endl;
        } else if (n==4) {
            cout << "Sam" << endl;
        }
    }
    return 0;
}