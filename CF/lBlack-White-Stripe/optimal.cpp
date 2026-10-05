#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n,k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int i=0;
        int j=k;
        int count =0;
        int ans=n;
        
        for(int l=i;l<j;l++){
            if(s[l]=='W'){
                count++;
            }
        }
        
        ans=count;
        
        while(j<n){
            
            if(s[i]=='W'){
                count --;
            }
            
            if (s[j]=='W'){
                count ++;
            }
            
            i++;
            j++;
            ans = min(ans,count);
        }
        cout << ans << endl;
    }
}