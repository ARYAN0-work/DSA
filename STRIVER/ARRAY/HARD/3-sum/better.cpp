class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>st;
        for(int i =0;i<nums.size();i++){
            set<int>hashset; // the reason we are righting this here bcz we want our set tp get  empty after j loop ends
            for(int j=i+1;j<nums.size();j++){
                int third = -(nums[i]+nums[k]);
                if(hashset.find(third)!= hashset.end()){
                    vector<int>temp ={num[i],num[j],num[k]}
                    sort(temp.begin(),temp.end());
                    st.insert(nums[j]);
                }
                hashset.insert(numms[j]);
            }
        }
        vecctor<vector>>ans(st.begin(),st.end());
        return ans;
    }
};