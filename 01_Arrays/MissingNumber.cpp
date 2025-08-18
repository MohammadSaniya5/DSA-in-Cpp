#include <bits/stdc++.h>
using namespace std;
 
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expected = n * (n + 1) / 2;
    int actual = accumulate(nums.begin(), nums.end(), 0);
    return expected - actual;
}

int main() {
    vector<int> nums1 = {3,0,1};
    vector<int> nums2 = {0,1};
    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};

    cout << "Missing from [3,0,1]: " << missingNumber(nums1) << endl; // 2
    cout << "Missing from [0,1]: " << missingNumber(nums2) << endl;   // 2
    cout << "Missing from [9,6,4,2,3,5,7,0,1]: " 
         << missingNumber(nums3) << endl; // 8
    return 0;
}
