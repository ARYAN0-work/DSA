class Solution {
public:
    int findKRotation(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int index = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[index]) {
                index = mid;
            }

            if (nums[low] <= nums[mid]) {
                if (nums[low] < nums[index]) {
                    index = low;
                }
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return index;
    }
};