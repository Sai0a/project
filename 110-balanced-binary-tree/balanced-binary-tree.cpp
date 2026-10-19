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
    int heightofbt(TreeNode* root ){
        if(!root)return 0;

        int leftht=heightofbt(root->left);
        int rightht=heightofbt(root->right);

        return 1+max(leftht,rightht);
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;

        int leftht=heightofbt(root->left);
        int rightht=heightofbt(root->right);
        

        if(abs(leftht-rightht)>1)return false;
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};