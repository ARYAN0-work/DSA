class Solution {     
public:   
    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int max_count = 0;
        int max_row = -1;

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            if (count > max_count) {
                max_count = count;
                max_row = i;
            }
        }
        return max_row;
    }
};