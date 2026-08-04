class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maxi = nums[0];

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];          // Extend current subarray

            maxi = max(maxi, sum);   // Update maximum sum found

            if (sum < 0)             // Negative sum can't help future subarrays
                sum = 0;
        }

        return maxi;
    }
};