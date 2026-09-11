class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {// ans we have to return a list of list 

        set<vector<int>>st;// i  will store unique in the form of list
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1; k<nums.size();k++){
                 if(nums[i]+nums[j]+nums[k]==0){
                   vector<int>temp ={nums[i],nums[j],nums[k]};
                   sort(temp.begin(),temp.end());
                   st.insert(temp);
                 }
                }
            }
        }

            vector<vector<int>>ans(st.begin(),st.end());// ans can you store everything in yourself of set// list of list
    return ans;
    
    }
};