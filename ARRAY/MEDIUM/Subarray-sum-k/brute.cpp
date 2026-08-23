class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        for(int i =0; i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
             int sum=0;
            for(int x=i;x<=j;x++){
                sum=sum+nums[x];
            }
            if(sum==k){
                count++;
            }
        }
        }
        return count;
    }
};