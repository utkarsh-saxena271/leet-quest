class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> arr(n, 0);
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for (auto& it : mp) {
            auto num = it.first;
            auto grp = it.second;
            int m = grp.size();
            vector<long long> pref(m + 1, 0);
            for (int i = 0; i < m; i++) {
                pref[i + 1] = pref[i] + grp[i];
            }
            for (int p = 0; p < m; p++) {
                long long idx = grp[p];
                long long left = idx * p - pref[p]; 
                long long right = (pref[m] - pref[p + 1]) -
                                  idx * (m - p - 1);
                arr[grp[p]] = left + right;
            }
        }
        return arr;
    }
};