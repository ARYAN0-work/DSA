class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {};
        bool cols[9][9] = {};
        bool boxes[9][9] = {};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '1';
                int box = (i / 3) * 3 + (j / 3);

                if (rows[i][num] || cols[j][num] || boxes[box][num])
                    return false;

                rows[i][num] = true;
                cols[j][num] = true;
                boxes[box][num] = true;
            }
        }

        return true;
    }
};


/*
Time Complexity: O(1) for the fixed 9 × 9 Sudoku board. If we generalize the board size to N × N, the time complexity is O(N²) because we visit each cell once.

Auxiliary Space Complexity: O(1) for the fixed-size board. For a generalized N × N board, the three tracking arrays require O(N²) space.
*/