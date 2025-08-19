#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    bool firstRow = false, firstCol = false;
 
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0) { firstRow = true; break; }
    } 
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) { firstCol = true; break; }
    }
 
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
 
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
 
    if (firstRow) {
        for (int j = 0; j < n; j++) matrix[0][j] = 0;
    } 
    if (firstCol) {
        for (int i = 0; i < m; i++) matrix[i][0] = 0;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    setZeroes(matrix);

    cout << "Matrix after setting zeroes:\n";
    for (auto row : matrix) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
    // Expected:
    // 1 0 1
    // 0 0 0
    // 1 0 1
    return 0;
}
