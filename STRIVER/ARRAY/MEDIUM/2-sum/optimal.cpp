class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int left =0, right =n-1;
        while(left<right){
            sort(nums.begin(),nums.end());
            int sum = nums[left]+nums[right];
            if(sum==target){
                return "YES";
            }
            else if(sum<target)left ++;
            else right--;
        }
    }
}    