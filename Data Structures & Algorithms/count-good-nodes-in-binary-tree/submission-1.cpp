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
    void dfs(TreeNode* root,int currentMax, int &goodNodes){
        if(!root){
            return;
        }

        
        if(root->val>=currentMax){
            goodNodes++;
        }

        int max = std::max(currentMax, root->val);

        dfs(root->left, max, goodNodes);
        dfs(root->right, max, goodNodes);
    }

    int goodNodes(TreeNode* root) {
        int goodNodes = 0;
        dfs(root, root->val, goodNodes);
        return goodNodes;
    }
};
