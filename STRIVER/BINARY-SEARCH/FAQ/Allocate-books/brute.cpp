class Solution {

    bool allocationisPossible(vector<int>& nums, int barrier, int k) {

        int allocatedStd = 1;
        int pages = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > barrier)
                return false;

            if (pages + nums[i] > barrier) {
                allocatedStd++;
                pages = nums[i];
            }
            else {
                pages += nums[i];
            }

            if (allocatedStd > k)
                return false;
        }

        return true;
    }

public:

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        int res = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (allocationisPossible(nums, mid, k)) {
                res = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return res;
    }
};