class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int, int> first, last;
        const int n = nums.size();
        vector<int> s(n, -1);

        for (int i = 0; i < n; ++i) {
            if (last.count(nums[i])) {
                int d = min(i - last[nums[i]], n - (i - last[nums[i]]));

                s[i] = d;

                if (s[last[nums[i]]] < 0 || s[last[nums[i]]] > d) {
                    s[last[nums[i]]] = d;
                }
            } else {
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
        }

        for (const auto& p : last) {
            if (p.second != first[p.first]) {
                int diff = p.second - first[p.first];
                int d = min(diff, n - diff);

                if (s[p.second] < 0 || s[p.second] > d) {
                    s[p.second] = d;
                }
                if (s[first[p.first]] < 0 || s[first[p.first]] > d) {
                    s[first[p.first]] = d;
                }
            }
        }

        vector<int> r;
        for (int q : queries) {
            r.push_back(s[q]);
        }

        return r;
    }
};