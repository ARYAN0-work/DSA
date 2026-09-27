#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {// >= nhi hoga kya
                breaks++;
            }
        }

        return breaks <= 1;
    }
};
//class Solution {
//public:
//    bool check(vector<int>& nums) {
//
//        int count =0;
//        for(int i=0; i< nums.size();i++){
//            if(nums[(i+1)%nums.size()]<=nums[i]){  yha = nhi aayega bcz of [1,1,1] case
//                count ++;
//            }
//        }
//        
//        if(count >=2){
//            return false;   
//        }
//        else{
//            return true;
//        }
//    };
//};