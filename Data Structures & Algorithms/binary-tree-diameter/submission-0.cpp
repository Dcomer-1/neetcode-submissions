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

    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;

    }
    int dfs(TreeNode* root, int &ans){
        if(root == nullptr) return 0;

        int leftHeight = dfs(root->left, ans);
        int rightHeight = dfs(root->right, ans);

        //Meant to keep track of the max depth 
        ans = max(ans,leftHeight + rightHeight);

        return 1 + max(leftHeight,rightHeight);
    }
};
