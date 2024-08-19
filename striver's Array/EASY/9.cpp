//Find the Union

#include <vector>
#include <set>
#include <iostream>
using namespace std;
class Solution{
    public:
   
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
         set<int> unionset;
         for(int i=0;i<n;i++){
          unionset.insert(arr1[i]);   
         }
         
         for(int i=0;i<m;i++){
          unionset.insert(arr2[i]);   
         }
        vector<int> unionVector(unionset.begin(), unionset.end());
        return unionVector;
         
    }
};
int main(){
    Solution obj;
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {1, 3, 4, 7, 8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> result = obj.findUnion(arr1, arr2, n, m);

    cout << "Union of two arrays is: ";
    for (int i = 0; i < result.size(); i++) {
        cout<<result[i]<<" ";
        }
}