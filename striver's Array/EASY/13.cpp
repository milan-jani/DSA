//longest subarray with sum k[postive]

#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,1,1,1,1,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    int length = 0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            
            if(sum==k){
                length= max(length,j-i+1);
            }
        }
    }
    cout<<length;
}