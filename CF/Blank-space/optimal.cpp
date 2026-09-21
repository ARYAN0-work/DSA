#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i = 0;

    while(i < t){

        int n;
        cin >> n;

        int maxi = -1;
        int count=0;
        int x;

        for(int i = 0; i < n; i++){
            cin >> x;
            if(x==0){
                count++;
            }
            else{
                count =0;
            }
            maxi= max(maxi,count);
        }
        cout << maxi << endl;
        i++;
    }
}