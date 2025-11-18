#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix1[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix1[i][j];
        }
    }
    int matrix2[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix2[i][j];
        }
    }
    int ansmatrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix1[i][j] == matrix2[i][j]) {
                ansmatrix[i][j] = 0;
            } else {
                ansmatrix[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ansmatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}