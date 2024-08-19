//	Count subarrays with given sum
#include<iostream>
using namespace std;

main(){
    int nums[] = {1,2,3};  
     int k=3;
    int n = sizeof(nums) / sizeof(nums[0]);
    int c = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == k) {
                    c++;
                }
            }
        }
        cout<< c;
}
