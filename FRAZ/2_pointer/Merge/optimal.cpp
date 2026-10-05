/*
🧠 The pattern-recognition lesson

Don't memorize:

"This particular LeetCode problem uses two pointers."

Memorize the clues:

Two-pointer clues
1. Two arrays/strings
2. Data is sorted OR can be sorted
3. Need to merge/search/compare from both sides
4. We can eliminate elements based on comparison

When you see:

Two sorted arrays + merge/combine/process in sorted order

your brain should immediately ask:

"Can I use two pointers instead of repeatedly searching?"

That's exactly the recognition skill we're training with LearnYard.
*/

class Solution { 
public: 
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) { 
         
        vector<vector<int>>ans;

        int i=0;
        int j=0;

        while(i < nums1.size() && j < nums2.size()){

            if(nums1[i][0] == nums2[j][0]) {

                ans.push_back({
                    nums1[i][0],
                    nums1[i][1] + nums2[j][1]
                });

                i++;
                j++;
            }
             else if(nums1[i][0] < nums2[j][0]) {

                ans.push_back(nums1[i]);
                i++;
            }

            else {

                ans.push_back(nums2[j]);
                j++;
            }
        }

         while(i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }

        while(j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;

    } 
};

Complexity

Every element is visited once:

nums1 → n elements
nums2 → m elements

Time = O(n + m)
Space = O(n + m)  // output