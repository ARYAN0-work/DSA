class Solution {   
public:
    int lowerBound(const vector<int>& row, int m, int x) {
        int low = 0, high = m - 1;
        int ans = m; 
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (row[mid] >= x) {
                ans = mid;
                high = mid - 1; 
            } else {
                low = mid + 1;  
            }
        }
        return ans;
    }

    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        int first_ind = 0;
        int count = 0;
        int max_count = 0;
        int max_row = -1;

        for (int i = 0; i < n; i++) {
            first_ind = lowerBound(mat[i], m, 1);
            count = m - first_ind;

            if (count > max_count) {
                max_count = count;
                max_row = i;
            }
        }
        return max_row;
    }
};