class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int>st;

        for(int i=0;i<nums.size();i++){

            if(st.find(nums[i])!=st.end()){
                return true;
            }

            st.insert(nums[i]);
        }
        
        return false;
    }
};

/*
1. Can we use two pointers?

Yes, but the usual two-pointer technique doesn't work directly on an unsorted array for this problem.

Consider:

nums = [3, 1, 4, 2, 3]

Suppose we use two pointers:

left = 0
right = nums.size() - 1

We compare nums[left] and nums[right].

Left	Right	Comparison	Result
3	3	3 == 3	Duplicate found!

Here, it works immediately! But consider another example.

nums = [3, 1, 4, 2, 5, 3]

Initially, we compare 3 and 3 again, so we find the duplicate.

However, these examples are misleading because the duplicate happens to be at the ends.

2. What if the duplicate is somewhere in the middle?

Consider:

nums = [1, 2, 3, 4, 2, 5]

Suppose we start with:

left = 0;
right = 5;

We compare:

nums[left]  = 1
nums[right] = 5

They're different.

Now, which pointer should we move?

Move left?
Move right?
Move both?

The problem is that we have no rule that guarantees we won't skip a duplicate.

Unlike sorted arrays, an unsorted array gives us no ordering information to determine which pointer to move safely.

3. What if we sort the array first?

Now consider:

nums = [1, 2, 3, 4, 2, 5]

After sorting:

[1, 2, 2, 3, 4, 5]

Now duplicates become adjacent.

You could use two pointers to compare elements, but you don't need two pointers at all! A single loop comparing each element with its predecessor is sufficient.

The time complexity would be O(n log n) because sorting dominates.
*/