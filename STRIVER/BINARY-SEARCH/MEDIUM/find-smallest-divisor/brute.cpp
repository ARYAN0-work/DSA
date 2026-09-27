class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int maxi = 0;

        for(int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }
        
        for(int d=1;d<=maxi;d++){
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum = sum + ceil((double)nums[i]/d);
            }
            if(sum<=threshold){
                return d;
            }
        }
        return -1;
    }
};