//Linear Search

#include<iostream>
using namespace std;

main(){
    int a[5]={1,2,3,4,5};
     int target=4;
    int n = sizeof(a) / sizeof(a[0]);
    for(int i=0;i<n-1;i++){
       if(a[i]==target){
        cout<<i<<endl;
        break;
       }
    }

 


}