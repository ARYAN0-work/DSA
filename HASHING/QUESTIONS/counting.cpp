/*
Given an array nums,

Return:
[
  [element1, frequency1],
  [element2, frequency2],
  ...
]

Example:

Input:
nums = [1, 2, 2, 1, 3]

Output:
[[1, 2], [2, 2], [3, 1]]
*/

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        
        int n = nums.size();
        //int map<int,int>mpp;
        map<int,int>mpp;
        for(int i=0;i< n ;i++){
           // nums[arr[i]];
           mpp[arr[i]];
        }

        //map<int,int>mpp;
        vector<vector<int>>ans;
        for(auto it:mpp){
            ans.push_back([it.first,it.second])
        }
        return ans;
    };
};

/*  ACTUAL ANS
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        
        int n = nums.size();
        map<int,int>mpp;
        for(int i=0 ; i < n ; i++){
            mpp[nums[i]]++; 
        };
        
        vector<vector<int>>ans;
        for(auto it : mpp){
         ans.push_back({it.first,it.second});
        };
        
        return ans;
    };
};
*/