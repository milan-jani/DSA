//maximum subarray sum
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, -2, 3, 4, -1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(sum > maxi) maxi = sum;
        if(sum < 0) sum = 0;
    }
    cout << "Maximum subarray sum is: " << maxi << endl;
    return 0;
}