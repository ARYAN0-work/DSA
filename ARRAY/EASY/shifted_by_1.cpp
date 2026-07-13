#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
       int temp = nums[0];
       int n = nums.size();
       for(int i =1; i<n;i++){// i is gonna start with 1 not 0 nums[-1] ye kuch nhi hota
           nums[i-1]=nums[i];
       }
       nums[n-1] =temp;
    }

};