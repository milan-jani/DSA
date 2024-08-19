//	Longest Consecutive Sequence in an Array

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int longestStreak=1;
        int currentStreak=1;

        for (int i = 1; i<nums.size(); i++) {
            if (nums[i]!=nums[i-1]) {
                if (nums[i]==nums[i-1]+1) {
                    currentStreak +=1;
                } else {
                    longestStreak=max(longestStreak, currentStreak);
                    currentStreak = 1;
                }
            }
        }

        return max(longestStreak, currentStreak);
    }
};


main(){
    Solution s;
     int a[]={100,4,200,1,3,2};  //op=4 : 1,2,3,4
     int n=sizeof(a)/sizeof(a[0]);
     vector<int> v(a,a+n);
     cout<<s.longestConsecutive(v)<<endl;
    
     
     
   
     
    
     
      
          }

  