class Solution { 
 
    bool isSplitPossible(vector<int>& nums, int maxAllowedSum, int k) { 
 
        int subarrays = 1; 
        int currentSum = 0; 
 
        for (int i = 0; i < nums.size(); i++) { 
 
            if (nums[i] > maxAllowedSum) 
                return false; 
 
            if (currentSum + nums[i] > maxAllowedSum) { 
                subarrays++; 
                currentSum = nums[i]; 
            } 
            else { 
                currentSum += nums[i]; 
            } 
 
            if (subarrays > k) 
                return false; 
        } 
 
        return true; 
    } 
 
public: 
 
    int splitArray(vector<int>& nums, int k) { 
 
        int low = *max_element(nums.begin(), nums.end()); 
        int high = accumulate(nums.begin(), nums.end(), 0); 
 
        int answer = high; 
 
        while (low <= high) { 
 
            int mid = (high - low) / 2; 
 
            if (isSplitPossible(nums, mid, k)) { 
                answer = mid; 
                high = mid - 1; 
            } 
            else { 
                low = mid + 1; 
            } 
        } 
 
        return answer; 
    } 
};