class Solution {
public:
    double myPow(double x, int n) {
        long num = n;
        if(num == 0) return 1.0;
        if(num == 1) return x;
    
        if(num < 0) {
            return 1.0/pow(x, -1*(num));
        }
        return pow(x,num);

    }
    double pow(double x, long n) {
        if(n == 0) return 1.0;
        if(n == 1) return x;
        
        if(n % 2 == 0){
            return pow(x*x, n/2);
        }

        return x * pow(x, n-1);
    }
};