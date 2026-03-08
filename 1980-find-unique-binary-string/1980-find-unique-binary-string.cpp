// optimised
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans;
        for(int i = 0; i < nums.size(); i++){
            char ch = nums[i][i];
            ans += (ch == '0'? '1' : '0');
        }
        return ans;
    }
};

// SC - o(n)
// tc - o(n^2)
// class Solution {
// public:
//     string findDifferentBinaryString(vector<string>& nums) {
//         vector<int> vals;
//         int ans;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int val = 0;
//             for (int j = 0; j < n; j++) {
//                 val = (val << 1) | (nums[i][j] - '0');
//             }
//             vals.push_back(val);
//         }

//         for (int i = 0; i < pow(2, n); i++) {
//             bool found = false;
//             for (int val : vals) {
//                 if (val == i) {
//                     found = true;
//                     break;
//                 }
//             }

//             if (!found) {
//                 ans = i;
//                 break;
//             }
//         }

//         string a;
//         for (int i = 0; i < n; i++) {
//             if (ans & 1)
//                 a.push_back('1');
//             else
//                 a.push_back('0');
//             ans >>= 1;
//         }
//         reverse(a.begin(), a.end());
//         return a;
//     }
// };