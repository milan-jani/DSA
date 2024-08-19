//Stock Buy and Sell

#include<iostream>
using namespace std;
main(){
     int a[]={7,1,5,3,6,4};
     int n=sizeof(a)/sizeof(a[0]);
        int maxp=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              sum=a[j]-a[i];
              maxp=max(maxp,sum);
            }
        

        }
        if(maxp<=0)
          cout<< "0";
          else
          cout<<maxp;
          }
