#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {

    // phase 3: upto where sorting should happen
    for(int i = n - 1; i >= 0; i--) {
        
        // phase star: TC
        int didSwap = 0;

        // phase 4 :
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j + 1]) {
                // "Walk through the unsorted part and compare neighbours."

                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;

                didSwap = 1;
            }
        }

        if(didSwap == 0) {
            break;
        }
    }
}


int main(){
    // phase_1: array | call
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    
    // phase 2: print those sorted array
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
    
}
