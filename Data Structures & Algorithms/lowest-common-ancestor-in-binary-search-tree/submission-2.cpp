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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, 
    TreeNode* q) {
        //recusion
        //base case: if the node is NULL, P, or Q, return root
        if(root == NULL || root == p || root == q){
            return root;
        }
        //search both branches of the tree
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        //if r and l return a descendent than the root is the LCA
            //return root
        if(left && right){
            return root;
        }else{
            return left ? left: right;
        }
        //if r or l is NULL then the descendents are in the other branch
            //return l or r     
    }
};
