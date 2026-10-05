class Solution {
public:

    bool cowweplac(vector<int>& nums, int dist, int cows) {

        int countCows = 1;
        int last = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] - last >= dist) {
                countCows++;
                last = nums[i];
            }
        }

        if (countCows >= cows)
            return true;
        else
            return false;
    }


    int aggressiveCows(vector<int> &nums, int k) {

        sort(nums.begin(), nums.end());

        int maximum = nums[nums.size() - 1];
        int minimum = nums[0];

        for (int dist = 1; dist <= maximum - minimum; dist++) {

            if (cowweplac(nums, dist, k)) {
                continue;
            }
            else {
                return dist - 1;
            }
        }

        return maximum - minimum;
    }
};