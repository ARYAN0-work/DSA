class Solution {
public:
    int median(vector<vector<int>> &matrix, int R, int C) {
        
        vector<int> ls;

        // Store all elements
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < C; j++) {
                ls.push_back(matrix[i][j]);
            }
        }

        // Sort all elements
        sort(ls.begin(), ls.end());

        // Return median
        return ls[(R * C) / 2];
    }
};