class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                for (int k = 0; k < 9; k++) {
                    if (j == k) continue;

                    if (board[i][j] == board[i][k])
                        return false;
                }
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                for (int k = 0; k < 9; k++) {
                    if (i == k) continue;

                    if (board[i][j] == board[k][j])
                        return false;
                }
            }
        }

        // Check 3 x 3 boxes
        for (int r = 0; r < 9; r += 3) {
            for (int c = 0; c < 9; c += 3) {

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (board[r + i][c + j] == '.') continue;

                        for (int x = 0; x < 3; x++) {
                            for (int y = 0; y < 3; y++) {
                                if (i == x && j == y) continue;

                                if (board[r + i][c + j] ==
                                    board[r + x][c + y])
                                    return false;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};

/*
1. Time Complexity (TC)

Time complexity tells us how the number of operations grows as the input size increases.

Let's assume our Sudoku board has N rows and N columns.

For our actual problem, N = 9.

Step 1: Calculate the TC of row checking

Look at our code:

for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        if (board[i][j] == '.') continue;

        for (int k = 0; k < 9; k++) {
            if (j == k) continue;

            if (board[i][j] == board[i][k])
                return false;
        }
    }
}

We have 3 nested loops.

Let's calculate their iterations.

Loop	Variable	Iterations
Outer loop	i	N
Middle loop	j	N
Inner loop	k	N

The total number of iterations in the worst case is approximately:

$$ N \times N \times N = N^3 $$

Therefore:

Row checking: O(N³)

Why the worst case? Because if no duplicate is found, the loops examine every possible comparison.

Step 2: Calculate the TC of column checking

Our column-checking code also has three nested loops.

for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        for (int k = 0; k < 9; k++) {
            // Compare cells
        }
    }
}

Again:

$$ N \times N \times N = N^3 $$

Therefore:

Column checking: O(N³)

Step 3: Calculate the TC of 3 × 3 box checking

This part looks more complicated because it has six nested loops!

for (int r = 0; r < 9; r += 3) {
    for (int c = 0; c < 9; c += 3) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {
                        // Compare cells
                    }
                }
            }
        }
    }
}

Don't panic! We can calculate it by understanding what each loop does.

For a generalized N × N Sudoku board, where each box has dimensions \(\sqrt{N} \times \sqrt{N}\):

Loops	Number of iterations
Select box row (r)	\(\sqrt{N}\)
Select box column (c)	\(\sqrt{N}\)
Select first cell (i, j)	\(N\)
Select second cell (x, y)	\(N\)

Multiplying these gives:

$$ \sqrt{N}\times\sqrt{N}\times N\times N $$

Since:

$$ \sqrt{N}\times\sqrt{N}=N $$

We get:

$$ N\times N\times N=N^3 $$

Therefore:

Box checking: O(N³)

Step 4: Calculate the total TC

Our code has three separate checks:

Row checking: O(N³)
Column checking: O(N³)
Box checking: O(N³)

We add them:

$$ O(N^3)+O(N^3)+O(N^3) $$ $$ =O(3N^3) $$

We drop constant factors when calculating Big-O complexity.

Therefore:

$$ \boxed{\text{TC}=O(N^3)} $$

Remember: We add the complexities of sequential sections, but we multiply the iteration counts of nested loops.

2. Space Complexity (SC)

Space complexity measures how much additional memory our algorithm uses as the input size grows.

Look at our code. We use variables such as:

int i, j, k;
int r, c, x, y;

These are just a fixed number of integer variables.

Whether the Sudoku board is 9 × 9 or 100 × 100, the number of variables we use doesn't increase.

We don't create another board, an array, or a hash map.

Therefore:

$$ \boxed{\text{Auxiliary SC}=O(1)} $$

Here, auxiliary space means additional memory used by the algorithm, excluding the input board.

The board itself occupies \(O(N^2)\) space, but we don't count that as auxiliary space.

3. Final answer for our brute-force solution
Complexity	Answer	Reason
Time Complexity	O(N³)	Three comparisons loops for each row/column check; box checking also takes O(N³).
Auxiliary Space Complexity	O(1)	Only a fixed number of variables are used.
One important distinction

LeetCode's Sudoku board is always 9 × 9.

Strictly speaking, because the board size is fixed, the runtime is bounded by a constant. However, in DSA, we conventionally express the complexity in terms of a generalized board size N, giving us O(N³) time and O(1) auxiliary space.
 */