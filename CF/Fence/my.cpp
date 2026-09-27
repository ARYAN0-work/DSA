#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int m=0;
    int t;
    cin >>t;
    
    while(m<t){
        
        int n;
        cin >>n;
        vector<int> nums(n);
        for(int i=0;i<nums.size();i++){
            cin >>nums[i];
        }
        
        int j=0;
        int k=j+1;
        int l=k+1;
        int ans=0;
        int sum=0;
        int temp=0;
        for(j;j<nums.size()-2;j++){
             sum=nums[j]+nums[l]+nums[k];
             j++,l++,k++;
             
             ans=nums[j]+nums[l]+nums[k];
             
             temp = min(sum,ans);
        }
        
        cout << temp << endl;
        
        
        m++;
    }
    
}