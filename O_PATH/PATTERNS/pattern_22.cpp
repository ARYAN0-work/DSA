#include<bits/stdc++.h>
using namespace std;

void print20(int n){
             
          for (int i = 0; i < 2*n-1; i++)
          {
            for (int j = 0; j < 2*n-1; j++)
            {
                int top = i;
                int left = j;
                int bottom = (2*n-2) - i;
                int right = (2*n-2) -j;
                
                int distance = min(min(top,bottom), min(left,right));

                cout << n - distance << " ";
            }
            cout << endl;
          }
          
       
}

int main(){
    int n =4;
    print20(n);
}