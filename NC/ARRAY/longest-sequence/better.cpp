class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            else if (nums[i] == nums[i - 1] + 1) {
                count++;
            }
            else {
                count = 1;
            }

            longest = max(longest, count);
        }

        return longest;
    }
};

/*
What are the time and space complexities?

Time complexity: O(n log n)

Sorting takes O(n log n).
The loop takes O(n).
Sorting dominates the overall time complexity.

Auxiliary space complexity: The loop uses O(1) extra variables, but the overall auxiliary space used by std::sort can be O(log n) due to its recursion stack.

One important thing, bro

This is a good better solution because sorting makes the problem easier.

However, LeetCode explicitly asks for an O(n) algorithm, so this approach doesn't meet that requirement.
*/