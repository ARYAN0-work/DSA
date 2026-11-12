#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i = 0;

    while(i < t){

        int n;
        cin >> n;

        vector<int> nums(n);
        int maxi = -1;

        for(int i = 0; i < nums.size(); i++){
            cin >> nums[i];
        }

        int count = 0;

        for(int j = 0; j < nums.size(); j++){

            if(nums[j] == 0){
                count++;
            }
            else{
                count = 0;
            }

            maxi = max(count, maxi);
        }

        cout << maxi << endl;

        i++;
    }
}