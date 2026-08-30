/**
Your current code will never be accepted on LeetCode for two simple reasons:

It gives the wrong answer: It adds duplicate numbers to your result list because it doesn't properly check what's already inside ls. That's why you got [-1, -2, -2] instead of [-1, -2].

It is too slow: Your code uses a loop inside another loop (nested loops). For long lists of numbers, your program would take billions of steps and time out (Time Limit Exceeded).
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector<int>ls;

        for(int i =0; i<nums.size();i++){
            if(ls.size()==0|| ls[0]!=nums[i]){
                int cout=0;
                for(int j=0;j<nums.size();j++){
                    if(nums[j]==nums[i]){
                        cout++;
                    }
                }
                if(cout>(nums.size()/3)){
                    ls.push_back(nums[i]);
                }
            }
        }
        return ls
    }
};