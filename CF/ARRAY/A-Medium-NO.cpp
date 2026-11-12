#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    int i=0;
    cin>> t;
 
    while(i<t){
            
    vector<int>nums(3);
    
    cin >>nums[0] >>nums[1] >>nums[2];
    
        sort(nums.begin(),nums.end());
        cout<< nums[1]<< endl;
        i++;
    }
}