// now we want print all the divisor of no . in order
// 36 -> 1,2,3,4,6,9,12,18,36

// point the divsior or factor gonna lie between 1 and n itslf= means loop from 1 to n

// if i is completly dividng n = remainder(0)

// TC -> O(N) = HOW 
// for loop se n mila and baaki unit operation hai 

/*
for(i=1;i<=N;i++){
   if(N%i ==0)
   print(i);
}
*/

//#include<bits/stdc++.h>
//using namespace std;
//
//void divison(int n){
//      for (int i = 1; i <= n; i++){
//          //(i%n==0) mistake
//        if (n%i==0){
//            cout<< i << " ";
//        }
//        
//      }
//      
//}
//
//
//int main(){
//    int n;
//    cin>> n;
//    divison(n);
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

void divison(int n){
      
        for (int i = 1; i <= n; i++)
        {
            if (n%i==0)
            {
                cout << i<< " ";
                //int count=n/i;
                //cout << count<< " "; mistake
                
            }
            
        }
        
      
}


int main(){
    int n;
    cin>> n;
    divison(n);
    return 0;
}

