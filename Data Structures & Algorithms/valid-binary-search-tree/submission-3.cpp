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

    bool dfs(TreeNode* root, long min, long max){ 
        if(!root) return true;

        if(root->val >= max){
            return false;
        }

        if(root->val <= min){
            return false;
        }

        
        return dfs(root->right, root->val, max ) && dfs(root->left, min ,root->val );

    }

    bool isValidBST(TreeNode* root) {
        int rootVal = root->val;
        return dfs(root, LONG_MIN, LONG_MAX);
    }
};
