//80. Remove Duplicates from Sorted Array II
//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Input: nums = [1,1,1,2,2,3]
// Output: 5
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
        return nums.size();
    }

    int n = 2;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] != nums[n - 2]) {
            nums[n] = nums[i];
            n++;
        }
    }

    return n;
    }
};

main(){
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    cout<<s.removeDuplicates(nums)<<endl;
}