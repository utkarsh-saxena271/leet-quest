class Solution {
    long long power(long long base, long long exp) {
        long long res = 1;
        long long mod = 1e9 + 7;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int T = sqrt(n);
        long long mod = 1e9 + 7;
        
        vector<vector<vector<int>>> groups(T);
        
        for (auto& q : queries) {
            int l = q[0], r = q[1], k = q[2], v = q[3];
            if (k < T) {
                groups[k].push_back({l, r, v});
            } else {
                for (int i = l; i <= r; i += k) {
                    nums[i] = (1LL * nums[i] * v) % mod;
                }
            }
        }
        
        vector<long long> dif(n + T, 1);
        for (int k = 1; k < T; k++) {
            if (groups[k].empty()) continue;
            fill(dif.begin(), dif.end(), 1);
            for (auto& q : groups[k]) {
                int l = q[0], r = q[1], v = q[2];
                dif[l] = (dif[l] * v) % mod;
                int R = ((r - l) / k + 1) * k + l;
                dif[R] = (dif[R] * power(v, mod - 2)) % mod;
            }
            for (int i = k; i < n; i++) {
                dif[i] = (dif[i] * dif[i - k]) % mod;
            }
            for (int i = 0; i < n; i++) {
                nums[i] = (1LL * nums[i] * dif[i]) % mod;
            }
        }
        
        int ans = 0;
        for (int x : nums) ans ^= x;
        return ans;
    }
};