//find number appear only once

#include <iostream>
using namespace std;

 main(){
   int nums[]={6,4,4,1,2,1,2};
   int n=sizeof(nums)/sizeof(nums[0]);
      
     int c=1;
    
    int r=0;
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(nums[i]==nums[j]&& i!=j){
            c++;
            break;
        }
     }
     if(c==1){
        r=nums[i];
        break;
     }
     else
     c=1;
    }

    cout<<"unique elemnt is:"<<r;

   
}