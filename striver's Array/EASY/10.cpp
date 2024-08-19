//fin missing number

#include <iostream>
using namespace std;

 main(){
   int a[]={3,0,1};
   int n=sizeof(a)/sizeof(a[0]);
      
        int max=0;          
        for(int i=0;i<n;i++){
          if(a[i]>max){
            max=a[i];
          }
        }
        max++;
        for(int i=0;i<=max;i++){
          bool found=false;
          for(int j=0;j<n;j++){
            if(a[j]==i){
              found=true;
              break;
            }
          }
          if(!found){
            cout<<i;
            break;
          }
        }

   
}