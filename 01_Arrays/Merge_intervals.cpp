#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    for (auto interval : intervals) {
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        } else { 
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> result = merge(intervals);

    cout << "Merged Intervals: ";
    for (auto v : result) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    cout << endl;
    // Expected Output: [1,6] [8,10] [15,18]
    return 0;
}
