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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //start at the root and check to see if the descendants are p and q
        //check if p or q is == to the root

        if(!root || root->val == p->val || root->val == q->val ){
            return root;
        }

        TreeNode* l = lowestCommonAncestor(root->left, p,q);
        TreeNode* r = lowestCommonAncestor(root->right, p,q);

        if(l != NULL && r != NULL){
            return root;
        }else if(l != NULL || r != NULL){
            return l ? l : r;
        }else{
            return NULL;
        }

    }
};
