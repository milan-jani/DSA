//	Majority Element (>n/2 times)

#include <iostream>
using namespace std;

main(){
    int nums[] = {4,4,2,4,3,4,4,3,2,4};
     int n=sizeof(nums)/sizeof(nums[0]);
     
        
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    c++;
                }
            }
            if(c>n/2)
                cout<< nums[i];
                break;
        }
}