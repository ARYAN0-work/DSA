/*  APPROCHES

class Solution {
public:
    int fib(int n) {
        fib(n) = fib(n-1)+fib(n-2);
        return fib(n);
    }
};

class Solution {
public:
    int fib(int n) {
        int cout = fib(n-1)+fib(n-2);
        return cout;
    }
};

seen the soln 
class Solution {
public:
    int fib(int n) {
        if(n==1 || n=0)
    }
};

class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return 1;
        }
        else{
            return fib(n-1) +fib(n-2);
        }
    }
};
*/


class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        else{
            return fib(n-1) +fib(n-2);
        }
    }
};