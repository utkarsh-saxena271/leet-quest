class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        for(int i = 0; i < bulbs.size(); i++){
            
            bool visited = false;
            for(int k = 0; k < i; k++){
                if(bulbs[k] == bulbs[i]){
                    visited = true;
                    break;
                }
            } 
            if(visited) continue;
            int count = 0;
            for(int j = 0; j<bulbs.size(); j++){
                if(bulbs[i] == bulbs[j]){
                    count++;
                }
            }
            if(count%2 != 0){
                ans.push_back(bulbs[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};