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
    bool isBalanced(TreeNode* root) {
        //DFS & check if the height of the either branch violates the global min height
        int min = 0;
        dfs(root,min);
        if(min != -1){
            return true;
        }
        return false;
    }

    int dfs(TreeNode* root, int &min){
        if(root == nullptr) return 0;

        int left = dfs(root->left, min);
        int right = dfs(root->right, min);
        if(left > right + 1 || right > left + 1){
            min = -1;
        }
        return 1 + max(left,right);
    }
};
