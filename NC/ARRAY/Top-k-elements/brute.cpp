class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int>freq(n,0);
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    freq[i]++;
                }
            }
        }
        
        for(int i=0;i<k;i++){

            int maxi=-1;
            int index=-1;

            for(int j=0;j<n;j++){
                if(freq[i]>maxi){
                    maxi=freq[j];
                    index=j;
                }
            }
            ans.push_back(nums[index]);

            for(int j=0;j<n;j++){
                if(nums[j]==nums[index]){
                    freq[j]=-1;
                }
            }
        }       
        return ans;
    }
};