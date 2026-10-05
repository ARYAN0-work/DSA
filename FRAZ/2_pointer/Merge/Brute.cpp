class Solution { 
public: 
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) { 
         
        vector<vector<int>>ans; 
 
        for(int i=0;i<nums1.size();i++){ 

            bool found = false;

            for(int j=0;j<nums2.size();j++){ 
                if(nums1[i][0]==nums2[j][0]){ 
                    ans.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});

                found = true;
                break;
                }
            } 
            if(found == false){
            ans.push_back(nums1[i]);

        }
        }
        
                for(int k = 0; k < nums2.size(); k++) {
        
            bool dfound = false;
        
            for(int l = 0; l < nums1.size(); l++) {
        
                if(nums2[k][0] == nums1[l][0]) {
                    dfound = true;
                    break;
                }
            }
        
            if(dfound == false) {
                ans.push_back(nums2[k]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;

    } 
};

/*
es — your time complexity idea is basically right, but let's express it properly.

You have two nested loops twice:

First part
for i in nums1
    for j in nums2

That's:

O(n × m)

Not n² unless both arrays have the same size.

Second part
for k in nums2
    for l in nums1

Again:

O(n × m)

Sorting

If the final ans contains k elements:

O(k log k)

Since k ≤ n + m:

O((n + m) log(n + m))

So overall:

O(nm + nm + (n+m)log(n+m))

which simplifies to:

O(nm + (n+m)log(n+m))

And if we assume both arrays have approximately n elements:

O(n² + n log n)

Since n² dominates:

O(n²)
Space complexity

This one is important.

You create:

vector<vector<int>> ans;

The answer can contain up to:

n + m

elements.

Therefore, output space = O(n + m).

Your variables like:

i, j, k, l
found

are all constant:

O(1)

So the auxiliary space excluding the returned answer is:

O(1)

But in interview/LeetCode discussions, we often mention the output space separately:

Auxiliary space: O(1)
Output space: O(n + m)

If they ask simply space complexity, I'd say:

O(n + m), because ans stores up to all IDs from both arrays.
*/