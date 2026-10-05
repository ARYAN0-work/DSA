# include <bits/stdc++.h>
using namespace std;
 
int main(){
    int l=0;
    int t;
    cin >>t;
    
    while(l<t){
        
        int n;
        cin>>n;
        vector<int>nums(n);
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            cin>>nums[i];
            sum = sum + nums[i];
        }
        
        if(sum%2==0){
            cout<< "YES"<< endl;
        }
        
        else{
            cout<<"NO"<< endl;
        }
        
        l++;
    }
}