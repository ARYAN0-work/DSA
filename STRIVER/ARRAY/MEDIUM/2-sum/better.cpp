class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mpp;

        for(int i = 0; i < nums.size(); i++) {

            int a = nums[i];
            int rem = target - a;

            if(mpp.find(rem) != mpp.end()) {
                return {mpp[rem], i};
            }

            mpp[a] = i;//Store the number a in the map, along with the index i where we found it.
        }

        return {};
    }
};

/*
map<int,int> mpp;

mpp[2] = 0;
mpp[5] = 1;

key    value
2   →    0
5   →    1
*/