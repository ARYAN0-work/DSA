class Solution {
public:
    void generate(vector<int>& nums, int index, vector<vector<int>>& ans) {
        // Base case
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try every element at the current position
        for (int i = index; i < nums.size(); i++) {

            // Choose
            swap(nums[index], nums[i]);

            // Explore
            generate(nums, index + 1, ans);

            // Undo choice (backtrack)
            swap(nums[index], nums[i]);
        }
    }

    void nextPermutation(vector<int>& nums) {
        vector<vector<int>> ans;

        // Generate all permutations
        generate(nums, 0, ans);

        // Sort permutations lexicographically
        sort(ans.begin(), ans.end());

        // Find current permutation
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == nums) {

                // If current is not the last permutation
                if (i + 1 < ans.size()) {
                    nums = ans[i + 1];
                }
                else {
                    // If current is the last, go to first
                    nums = ans[0];
                }

                return;
            }
        }
    }
};