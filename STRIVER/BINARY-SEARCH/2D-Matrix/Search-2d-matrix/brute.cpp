class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            // Check if target lies within the boundaries of the current row
            if (target >= matrix[i][0] && target <= matrix[i][n - 1]) {
                // Perform Binary Search on this specific row
                int low = 0, high = n - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (matrix[i][mid] == target) {
                        return true;
                    } else if (matrix[i][mid] < target) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
                // Target was within range but not present in the row
                return false;
            }
        }
        return false;
    }
};

//Time Complexity: $\mathcal{O}(m + \log n)$ — We iterate through at most $m$ rows, and for the matching row, we perform Binary Search in $\mathcal{O}(\log n)$ time