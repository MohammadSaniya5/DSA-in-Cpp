#include <bits/stdc++.h>
using namespace std;
 
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
 
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
 
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    vector<int> nums1 = {1,3,4,2,2};
    vector<int> nums2 = {3,1,3,4,2};

    cout << "Duplicate in [1,3,4,2,2]: " << findDuplicate(nums1) << endl; // 2
    cout << "Duplicate in [3,1,3,4,2]: " << findDuplicate(nums2) << endl; // 3
    return 0;
}
