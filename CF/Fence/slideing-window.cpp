#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int sum = 0;
    int left = 0;
    int right = k - 1;

    for(int j = left; j <= right; j++){
        sum += nums[j];
    }

    int mini = sum;
    int ans = 1;

    while(right < n - 1){

        sum = sum - nums[left];

        left++;
        right++;

        sum = sum + nums[right];

        if(sum < mini){
            mini = sum;
            ans = left + 1;
        }
    }

    cout << ans << endl;
}