class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = INT_MAX;
        int ans = INT_MIN;
        for(int price:prices){
            mp = min(mp, price);
            ans = max(ans, price-mp);
        }
        return ans;
    }
};