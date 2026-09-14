class Solution {
public:

    // ❌ YOUR VERSION had: int mid as a parameter
    // You don't need to pass mid because we calculate it inside.
    int bs(vector<int>& nums, int low, int high, int target) {

        if (low > high) {
            return -1;
        }

        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        else if (nums[mid] > target) {
            // ❌ You had:
            // return bs(nums, low, mid, mid-1, target);

            // ✅ Correct:
            return bs(nums, low, mid - 1, target);
        }

        else {
            // ❌ You had:
            // return bs(nums, mid+1, mid, high, target);

            // ✅ Correct:
            return bs(nums, mid + 1, high, target);
        }
    }


    int search(vector<int>& nums, int target) {

        // ❌ You had:
        // int bs(nums, 0, nums.size()-1, target);

        // Problems:
        // 1. Don't write "int" when calling a function.
        // 2. search() itself must return the result of bs().
        // 3. You actually fixed nums.size()-1 correctly here.

        // ✅ Correct:
        return bs(nums, 0, nums.size() - 1, target);
    }
};