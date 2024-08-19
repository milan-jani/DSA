#include<iostream>
using namespace std;

main(){
    int a[5]={1,2,3,4,5};
    bool ans=true;
    int n = sizeof(a) / sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ans=false;
            break;
        }
    }
    if(ans)
     cout<<"array is sorted";
     else
     cout<<"array is not sorted";

 


}