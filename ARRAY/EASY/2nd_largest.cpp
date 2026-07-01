#include<bits/stdc++.h>
using namespace std;

// notice that array is gonna have atleast 2 elements in this question, uniques not negative elements:no duplicates : given 
int secondLargest(vector<int>&a,int n){
    int largest=a[0];
    int slargest=-1;
    for (int i = 1; i < n; i++) {
        if (a[i]>largest){
        slargest = largest;
        largest =a[i];
        }
        else if(a[i]!=largest && a[i]>slargest){
        slargest =a[i];
      }
    }
    return slargest;
}
int secondSmalest(vector<int>&a,int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;// reason we are finding smallest so the no . is gonna be the very big 
    for (int i = 1; i < n; i++) {
        if (a[i]<smallest){
        ssmallest = smallest;
        smallest =a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
        ssmallest =a[i];
      }
    }
    return ssmallest;
}


vector<int> getSecondOrderElements(int n,vector<int>a){
    // in interviews give valid names like this
    int slargest= secondLargest(a,n);
    int ssmalest= secondSmalest(a,n);
    return {slargest,ssmalest};
}