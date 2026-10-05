#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = n;

        for (int i = 0; i <= n - k; i++) {

            int count = 0;

            for (int j = i; j < i + k; j++) {
                if (s[j] == 'W') {
                    count++;
                }
            }

            if (count < ans) {
                ans = count;
            }
        }

        cout << ans << endl;
    }

    return 0;
}