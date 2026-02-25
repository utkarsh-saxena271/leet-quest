class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n = n >> 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<int> bits(n);
        for (int i = 0; i < n; i++) {
            bits[i] = countSetBits(arr[i]);
        }

        for (int i = 1; i < n; i++) {
            int curr = arr[i];
            int currBits = bits[i];
            int prev = i - 1;
            while (prev >= 0 &&
                   (currBits < bits[prev] ||
                    (currBits == bits[prev] && arr[prev] > curr))) {
                arr[prev + 1] = arr[prev];
                bits[prev + 1] = bits[prev];
                prev--;
            }
            arr[prev + 1] = curr;
            bits[prev + 1] = currBits;
        }
        return arr;
    }
};