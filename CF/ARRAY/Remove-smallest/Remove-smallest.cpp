#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        bool possible = true;

        for (int j = 0; j < n - 1; j++) {
            int sub = nums[j + 1] - nums[j];

            if (sub > 1) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


// brute is simply using abs fn and 2 loops