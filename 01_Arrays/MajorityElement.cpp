#include <bits/stdc++.h>
using namespace std;
 
int majorityElement(vector<int>& nums) {
    int candidate = 0, count = 0;
    for (int x : nums) {
        if (count == 0) { candidate = x; count = 1; }
        else if (x == candidate) count++;
        else count--;
    } 
    return candidate;
}

int main() {
    vector<int> nums1 = {3,2,3};
    vector<int> nums2 = {2,2,1,1,1,2,2};
    cout << "Majority of [3,2,3]: " << majorityElement(nums1) << "\n";      // 3
    cout << "Majority of [2,2,1,1,1,2,2]: " << majorityElement(nums2) << "\n"; // 2
    return 0;
}
