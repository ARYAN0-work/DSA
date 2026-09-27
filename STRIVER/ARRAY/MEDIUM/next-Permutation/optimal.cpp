class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int a = nums.size();

        // Find the first decreasing element from the right
        for (int i = a - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // If no such element exists, this is the last permutation
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the smallest element greater than nums[ind]
        for (int i = a - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Reverse the remaining part
        reverse(nums.begin() + ind + 1, nums.end());
    }
};