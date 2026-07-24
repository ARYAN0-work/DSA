#include<bits/sdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        for(int i =0; i< nums.size();i++){
           for(int j =0; j< nums.size();ij++){
            if(i==j) continue;
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
           }
        }
    }
    return {};
}    


// optimized approch

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        for(int i =0; i< nums.size();i++){
           for(int j =i+1; j<nums.size() ;ij++){
            if(i==j) continue;
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
           }
        }
    }
    return {};
}    































class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {

            for (int j = 0; j < i; j++) {


                 if(i=j) continue;
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }

            }
        }

        return {};
    }
};