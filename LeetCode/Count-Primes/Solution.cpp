1class Solution {
2public:
3    int countPrimes(int n) {
4        vector<bool> isprime(n, true);
5        int ans = 0;
6        for (long i = 2; i < n; i++) {
7            if (isprime[i]) {
8                ans++;
9                for (long j = i*i; j < n; j += i)
10                    isprime[j] = false;
11            }
12        }
13        return ans;
14    }
15};
16