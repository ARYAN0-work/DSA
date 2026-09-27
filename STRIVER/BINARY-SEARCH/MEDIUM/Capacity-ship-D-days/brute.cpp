#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int shipWithinDays(vector<int>& weights, int days) {

        int maxWeight = *max_element(weights.begin(), weights.end());

        int totalWeight = 0;

        for(int i = 0; i < weights.size(); i++) {
            totalWeight += weights[i];
        }

        // Try every possible capacity
        for(int capacity = maxWeight; capacity <= totalWeight; capacity++) {

            int daysNeeded = 1;
            int currentLoad = 0;

            for(int i = 0; i < weights.size(); i++) {

                if(currentLoad + weights[i] <= capacity) {
                    currentLoad += weights[i];
                }
                else {
                    daysNeeded++;
                    currentLoad = weights[i];
                }
            }

            if(daysNeeded <= days) {
                return capacity;
            }
        }

        return -1;
    }
};