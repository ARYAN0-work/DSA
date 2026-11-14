class Solution {     
public:   
    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        int row = 0;
        int col = m - 1;
        int max_row = -1;

        while (row < n && col >= 0) {
            if (mat[row][col] == 1) {
                max_row = row; // Found a 1 further left, update current best row
                col--;         // Move left to check for more 1s in this row
            } else {
                row++;         // Hit a 0, move down to check the next row
            }
        }

        return max_row;
    }
};