#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    // phase 3: start sorting
    for (int i = 0; i < n-2; i++){// this is where upto sorting should be done
        int mini =i;
        for (int j = i; j < n-1; j++){ // this is where upto swaping can happen
            if (arr[j]<arr[mini])
            {
                mini =j;
            }
        }
        // phase 4: swapping theory
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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
    selection_sort(arr,n);
    
    // phase 2: print those sorted array
    for (int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
    
}

/* INPUT
6
13  46  24  52  20  9
*/

/* OUTPUT
9 13  20  24  46  52
 */