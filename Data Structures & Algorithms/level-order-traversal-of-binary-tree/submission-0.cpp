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

    void levelOrderRecur(TreeNode* root, int level, vector<vector<int>> &ans){
        if(!root){
            return;
        }
        //start new row
        if(ans.size() <= level){
            ans.push_back({});
        }
        ans[level].push_back(root->val);

        levelOrderRecur(root->left, level+1, ans);
        levelOrderRecur(root->right, level+1, ans);  
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrderRecur(root,0,ans);
        return ans;
    }
};
