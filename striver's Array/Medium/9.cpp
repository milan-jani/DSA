//Rotate Matrix by 90 degrees
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
         for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
             swap(matrix[i][j],matrix[j][i]);
             
            }
        }

    for (int i = 0; i < n; i++) {
    int a = 0;
    int b = n - 1;
    while (a < b) {
       swap(matrix[i][a], matrix[i][b]);
        a++;
        b--;
    }
}
        
       
    }
};

int main() {
    Solution solution;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    solution.rotate(matrix);

    cout << "Rotated Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}