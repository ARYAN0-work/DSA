class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
          for(int i = nums.size()-1;i>=0;i--){
               int noSwap=0;
               //for(int j = 0; j= i-1; j++){
                 for(int j = 0; j<= i-1; j++){
                 if(nums[j]>nums[j+1]){
                    int temp = nums[j+1];
                    //int nums[j+1] = nums[j];
                    //int nums[j] = temp;
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                    noSwap = 1;
                 }
               }
               //if(noSwap==1){
               if(noSwap==0){
                break;
               }
          }
          return nums;
    }
};
