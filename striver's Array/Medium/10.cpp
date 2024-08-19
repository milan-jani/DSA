//Print the matrix in spiral manner
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        if (rows == 0) return;
        int cols = matrix[0].size();
        int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

        while (true) {
            if (left > right) break;
            for (int i = left; i <= right; i++) {
                cout << matrix[top][i] << " ";
            }
            top++;

            if (top > bottom) break;
            for (int i = top; i <= bottom; i++) {
                cout << matrix[i][right] << " ";
            }
            right--;

            if (left > right) break;
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;

            if (top > bottom) break;
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
};


int main() {
    Solution solution;

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    cout << "Spiral Order: ";
    solution.spiralOrder(matrix);
    cout << endl;

    return 0;
}