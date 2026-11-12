#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int>nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        int currentSum = nums[0];
        int maxSum = nums[0];

        for(int j = 1; j < nums.size(); j++){
           
            if(abs(nums[j]) % 2 == abs(nums[j-1]) % 2){
                currentSum = nums[j];
            }
            else{
                currentSum = max(nums[j], currentSum + nums[j]);
            }

            maxSum = max(maxSum, currentSum);
        }
       
        cout << maxSum << endl;
    }
}