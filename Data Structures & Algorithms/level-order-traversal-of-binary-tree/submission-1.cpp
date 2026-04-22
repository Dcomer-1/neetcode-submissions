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
    //create a 2D array 
    vector<vector<int>>ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        //call dfs with root
        dfs(root, 0, ans);
        //return the 2D array
        return ans;

    }

    void dfs(TreeNode* root, int level, vector<vector<int>> &ans){
        if(!root){return; }
        //base case: if !root return NULL

        //if the size of the array is less than or equal to the level
        //append another array at position level
        if(ans.size() <= level){
            ans.push_back({});
        }
        //insert root at index level in the array
        ans[level].push_back({root->val});

        //call the left then the right
        dfs(root->left, level + 1, ans);
        dfs(root->right, level + 1, ans);
    }


   
};
