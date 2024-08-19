//Majority Element (n/3 times)
#include<iostream>
#include<vector> 
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() / 3;
        vector<int> a;
        for (int i = 0; i < nums.size(); i++) {
            int c = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    c++;
                }
            }
            bool exists = false;
            for (int k = 0; k < a.size(); k++) {
                if (a[k] == nums[i]) {
                    exists = true;
                    break;
                }
            }
            if (c > n && !exists) {
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    vector<int> result = solution.majorityElement(nums);

    cout << "Majority elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}