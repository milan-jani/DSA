//11. Container With Most Water
// # https://leetcode.com/problems/container-with-most-water/
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){
            int w = right - left; //width
            int h = min(height[left], height[right]);
            int area = h * w;
            maxi = max(maxi, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }
        return maxi;
    }
};

main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    std::cout << s.maxArea(height) << std::endl;
}