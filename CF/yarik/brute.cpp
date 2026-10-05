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

        long long ans = LLONG_MIN;//LLONG_MIN is a predefined constant in C++ representing the smallest possible value of a long long.

        for (int i = 0; i < n; i++) {

            long long sum = nums[i];

            // Single element subarray is always valid
            ans = max(ans, sum);

            for (int j = i + 1; j < n; j++) {

                // Adjacent elements must have different parity
                if ((nums[j] % 2) == (nums[j - 1] % 2)) {
                    break;
                }

                sum += nums[j];

                ans = max(ans, sum);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

/*
long long is an integer data type that can store much larger whole numbers than int.

int x = 100;
long long y = 1000000000000LL;

Typical ranges:

Type	Approximate range
int	−2.1 billion to +2.1 billion
long long	−9.22 quintillion to +9.22 quintillion


*/