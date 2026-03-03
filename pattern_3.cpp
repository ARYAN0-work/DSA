#include<bits/stdc++.h>
using namespace std;

void print3(int n){
      for (int i = 1; i <= n; i++)// if ypu start with 1 only 4 lines will print so use<=
      {
        for (int j = 1; j <=i ; j++)
        {
            //cout<< "1";// thats what i did
            //cout<< "j";// actually you are printin j character, not the variable j => Because "j" (with quotes) is a string literal.
            cout<<" " <<j;
        }
        cout<< endl;
      }
      
}


int main(){
    int n;
    cin>> n;
    print3(n);
}