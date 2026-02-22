class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        for(int i = 0; i < nums1.size(); i++) {
            int target = nums1[i];
            int nextGreater = -1;
            
            int j = 0;
            while(nums2[j] != target) {
                j++;
            }
            for(int k = j + 1; k < nums2.size(); k++) {
                if(nums2[k] > target) {
                    nextGreater = nums2[k];
                    break;
                }
            }
            
            result.push_back(nextGreater);
        }
        
        return result;
    }
};