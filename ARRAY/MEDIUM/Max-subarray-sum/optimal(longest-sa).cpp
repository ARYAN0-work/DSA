class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {

        int sum = 0;
        int maxi = nums[0];

        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for(int i = 0; i < nums.size(); i++) {

            // If starting fresh is better
            if(sum == 0)
                start = i;

            sum += nums[i];

            // Found a better maximum sum
            if(sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            // Reset if sum becomes negative
            if(sum < 0)
                sum = 0;
        }

        return {ansStart, ansEnd};
    }
};