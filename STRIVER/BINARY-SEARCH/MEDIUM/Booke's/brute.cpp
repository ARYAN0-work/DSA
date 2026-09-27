class Solution {
public:

    bool possible(vector<int>& arr, int day, int m, int k) {

        int cnt = 0;
        int noOfB = 0;

        for(int i = 0; i < arr.size(); i++) {

            if(arr[i] <= day) {
                cnt++;
            }
            else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }

        noOfB += (cnt / k);

        if(noOfB >= m)
            return true;

        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        // Impossible to make m bouquets
        if((long long)m * k > n)
            return -1;

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        // Brute force: check every possible day
        for(int day = mini; day <= maxi; day++) {

            if(possible(bloomDay, day, m, k))
                return day;
        }

        return -1;
    }
};