#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = a[0];

        for (int i = 0; i < n; i++) {

            int sum = a[i];

            for (int j = i + 1; j < n; j++) {

                if (abs(a[j]) % 2 == abs(a[j - 1]) % 2) {
                    break;
                }

                sum += a[j];

                ans = max(ans, sum);
            }

            ans = max(ans, a[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}