class Solution {
public:

    bool canWePlace(vector<int>& nums, int dist, int cows) {
        
        int cntCow = 1;
        int last = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] - last >= dist) {
                cntCow++;
                last = nums[i];
            }

            if (cntCow >= cows)
                return true;
        }

        return false;
    }

    int aggressiveCows(vector<int> &nums, int k) {

        sort(nums.begin(), nums.end());

        int low = 0;
        int high = nums[nums.size() - 1] - nums[0];

        while (low <= high) {

            int mid = (low + high) / 2;

            if (canWePlace(nums, mid, k) == true) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return high;
    }
};