//sorting of 0,1,2

#include <iostream>
using namespace std;

main(){
     int nums[]={2,0,2,1,2,2,1};
        int n=sizeof(nums)/sizeof(nums[0]);

   int low=0,mid=0,high=n-1;
       while (mid <= high) {
        switch (nums[mid]) {
            case 0:
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[high]);
                high--;
                break;
        }
    }
     for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}