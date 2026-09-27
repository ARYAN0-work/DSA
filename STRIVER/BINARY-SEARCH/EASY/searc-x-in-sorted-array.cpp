class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]== target){
                return mid;
            }
            else if (nums[mid]> target){ // dont compare index with a no.  
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
};

// you used mid == target & mid> target at line 8 and 11