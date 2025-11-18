#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix1[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }
    int matrix2[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix1[i][j] == matrix2[i][j]) {
                cout << 0 << " ";
            } else {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}