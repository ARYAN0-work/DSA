class Solution {
public:
    double myPow(double x, int n) {
        
        double ans =1;

        long long power = n;

        if (power < 0) {
            power = -power;
        }

        for(int i=0;i<power;i++){
            ans = ans*x;
        }

        if(n<0){
            return 1/ans;
        }
        
        return ans;
    }
};