// # prime no => which has two factors only 1 and itslef
// prime no. => 1 and itslef wrong bcz 1 is prime by itself

// using brute force => the first algo which comes to ouyr mind using that

/*  extreme brute forch approch
cout ==0
for(i=1; i<=N; i++){  //tc = n baki sub unit operat
}
if(N%i ==0)
cout++;
}
if(cout ==2) tick
else not tick
*/


// also all the factors can be found in square root of n => save tc [ run for sqrt(n)]
/*
cout ==0
for(i=1; i*i<=n; i++){  //tc = n baki sub unit operat
}
if(N%i ==0)
cout++;
}
if((n/i)!=i) 
court++;
}
if(cout == 2) tick
else no ticl
*/  
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            cnt++;
            if((n / i) != i) cnt++;
        }
    }

    if(cnt == 2) cout << "true";
    else cout << "false";
}
