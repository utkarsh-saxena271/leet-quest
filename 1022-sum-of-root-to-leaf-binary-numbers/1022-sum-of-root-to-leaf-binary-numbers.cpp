/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        return sum(root, 0);
    }
    int sum(TreeNode* root, int n){
        if(root == NULL) return 0;
        n = (n << 1) | root->val;
        if(root->left == NULL && root->right == NULL){
            return n;
        }
        return sum(root->left,n) + sum(root->right,n);
    }
    
};