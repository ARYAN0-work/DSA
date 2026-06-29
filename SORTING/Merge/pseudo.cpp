#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Compare elements from left and right halves and push the smaller one to temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If elements are still left in the left half, copy them
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If elements are still left in the right half, copy them
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Transfer all elements from temp back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high) {
    // Base Case: Subarray has only 1 element
    if (low == high) return;
    
    int mid = (low + high) / 2;
    
    mS(arr, low, mid);          // Sort the left half recursively
    mS(arr, mid + 1, high);     // Sort the right half recursively
    
    merge(arr, low, mid, high); // Merge the sorted halves
}

void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);//  it takes arr and satrt tracking from 0 to n-1=> mergesortRecursive 
}