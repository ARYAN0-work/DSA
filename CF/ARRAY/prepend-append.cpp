#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main(){
    
    int l = 0;
    int t;
    cin >> t;
    
    while(l < t){
        
        string name;
        int n;
        int ans = 0;
        
        cin >> n;
        cin >> name;
        
        int low = 0;
        int high = name.size() - 1;
        
        while(low < high){// bcz Because in your algorithm, the number of iterations isn't controlled by i. It's controlled by low and high.
            
            if(name[low] == name[high]){
                break;
            }
            else{
                low++;
                high--;
            }
        }
        
        ans = high - low + 1;
        
        cout << ans << endl;
        
        l++;
    }
    
    return 0;
}