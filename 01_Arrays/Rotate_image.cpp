#include <bits/stdc++.h>
using namespace std;
 
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
 
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    } 
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate(matrix);

    cout << "Rotated Matrix: \n";
    for (auto row : matrix) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
    // Expected:
    // 7 4 1
    // 8 5 2
    // 9 6 3
    return 0;
}
