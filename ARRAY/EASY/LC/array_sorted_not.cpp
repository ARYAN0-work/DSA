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

/* logic wrong 
class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums[i]%2==0){
                int mid = nums.size()/2;
            }
            if(nums[i]%2!=0){
                int mid = nums.size()+1/2;
            }
        for(int i=1;i<=nums.size();i++){
            if(mid[i]==1 || mid[i]==nums.size()){
                while(mid[i+1]==mid[i-1]){
                continue;    
                i++;
            }
            }
            if(nums[i]<=nums[i+1]){
                i++;
            }
            return true;
        }
        
    }
    return false;
};

95 PERCENTAGE COMPLETED 

class Solution {
public:
    bool check(vector<int>& nums) {
        int broke = 0;// you cant use break bcz its  a reserved keyword
        int n = nums.size();
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]<nums[i+1]%n){
                i++;
            }
            broke ++;
        }
        if(broke==1 || broke==0){
            return true;
        }
        else{
            return false;
        }
    }
};
*/