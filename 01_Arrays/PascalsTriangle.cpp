#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    if (numRows <= 0) return ans;

    ans.push_back({1});  

    for (int r = 1; r < numRows; r++) {
        vector<int> row(r + 1, 1);            
        for (int j = 1; j < r; j++) {         
            row[j] = ans[r - 1][j - 1] + ans[r - 1][j];
        }
        ans.push_back(row);
    }
    return ans;
}

int main() {
    int numRows = 5;
    auto tri = generate(numRows);
    for (auto &row : tri) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }
    // Expected:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    return 0;
}
