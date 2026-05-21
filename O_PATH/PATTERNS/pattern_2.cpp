#include<bits/stdc++.h>// bits / hota hai
using namespace std;

void print2(int n){
      for (int i = 1; i <= n; i++)// yha pr 4 dal diya n ki jagah isliye boundry condn problem
      {
        for (int j = 1; j <= i; j++)// when i=0, inner loop j<o does not run and 1st row will be empty thats why output is shifted
        {
            cout<< "*";
        }
        cout<<endl;
      }
      
}




int main(){
    int n;
    cin>> n;
    print2(n);// while passing the parameter you can not give type
}