class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isprime(n, true);
        int ans = 0;
        for (long i = 2; i < n; i++) {
            if (isprime[i]) {
                ans++;
                for (long j = i*i; j < n; j += i)
                    isprime[j] = false;
            }
        }
        return ans;
    }
};
