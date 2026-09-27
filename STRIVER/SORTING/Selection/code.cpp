/*
Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.



A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.
*/

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

        // for(int i=0; (nums.size()-2); i++){} // ❌ Segmentation Fault
        // Problem: nums.size()-2 is just a number, not a condition.
        // If size = 5, then condition becomes 3 (true), causing an infinite loop.

        // We need i to run from 0 to n-2
        for(int i = 0; i < nums.size()-1; i++) {

            int mini = i;

            // int mini = nums[i]; // ❌ Wrong
            // We don't store the value, we store the INDEX.

            // for(int j=i; j<nums.size()-1; j++){}
            // We don't have to compare the first element with itself.

            // j < nums.size()-1 // ❌ Wrong
            // Last index would never be checked.
            for(int j = i+1; j < nums.size(); j++) {

                // int mini = j; // ❌ Wrong
                // mini must stay outside the loop.
                // Otherwise it resets every iteration.

                if(nums[j] < nums[mini]) {

                    // j = mini; // ❌ Wrong
                    // j is the scanning pointer.
                    // mini stores the smallest index found so far.

                    mini = j;
                }
            }

            // swap(nums[i], nums[j]); // ❌ Compilation Error
            // j dies after the loop (out of scope).
            // We need the smallest index stored in mini.

            swap(nums[i], nums[mini]);
        }

        return nums;
    }
};