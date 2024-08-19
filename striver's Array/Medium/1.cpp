// 2 sum problem 

#include <iostream>
using namespace std;

 main(){
   int nums[]={2,7,11,15};
   int n=sizeof(nums)/sizeof(nums[0]);
      int target=9;
      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((nums[i]+nums[j])==target && i!=j){
               
                 cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }

   
}