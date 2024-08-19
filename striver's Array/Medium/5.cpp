//Rearrange the array in alternating positive and negative items
#include<iostream>
using namespace std;
main(){
     int a1[]={-1,1};
     int n=sizeof(a1)/sizeof(a1[0]);
     int a[n];
       int pos=0;
        int neg=1;
        for(int i=0;i<n;i++){
            if(a1[i]>0){
                a[pos]=a1[i];
                pos +=2;
            
            }
            else{
                a[neg]=a1[i];
                neg+=2;
            }
        }
        for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
        }
          }
