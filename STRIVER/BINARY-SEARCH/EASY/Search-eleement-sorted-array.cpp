class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low=0;
        int high=nums.size()-1;
        if(nums[mid]==target) return mid;
        
        while(low<=high){
            int mid=(low+high)/2;

            if(nums[low]<=nums[mid]){ 
                if(nums[low]<=target && nums[mid]>=target){
                    high = mid-1;
                }
                else{
                    low= mid+1;
                }
            }

            else{
                if(target >= nums[mid] && nums[high]>=tagret){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        
    }
};