// longest subarray with sum k [positive,negative]

#include <iostream>
using namespace std;
int main() {
    int arr[] = {-1, 2, 3, 1, -3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 7;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int cSum = 0;
        for (int j = i; j < n; j++) {
            cSum += arr[j];
            if (cSum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    cout << "Length of the longest subarray with sum " << k << " is " << maxLen << endl;

    return 0;
}