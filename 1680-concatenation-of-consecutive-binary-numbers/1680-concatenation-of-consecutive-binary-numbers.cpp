class Solution {
public:
    int concatenatedBinary(int n) {
        int mod = 1000000007;
        long long ans = 0; 
        int bits = 0;
        for(int i = 1; i <= n; i++){
            if ((i & (i - 1)) == 0){
            bits++;
            }
            ans = ((ans << bits) | i) % mod;
        }
        return ans;
    }
};
// Brute force for small nums
// class Solution {
// public:
//     int concatenatedBinary(int n) {
//         string s = "";
//         for (int i = 1; i <= n; i++) {
//             string tempb = "";
//             int temp = i;
//             while (temp > 0) {
//                 if ((temp & 1) == 0) {
//                     tempb += "0";
//                 } else {
//                     tempb += "1";
//                 }
//                 temp = temp >> 1;
//             }
//             reverse(tempb.begin(), tempb.end());
//             s += tempb;
//         }
//         if (s.size() <= 32) {
//             int n = 0;
//             for (char c : s) {
//                 n = (n << 1) | (c - '0');
//             }
//             return n;
//         } else {
//             long long num = 0;
//             for (char c : s) {
//                 num = (num << 1) | (c - '0');
//             }
//             return (int)num % 1000000007;
//         }
//         return 0;
//     }
// };