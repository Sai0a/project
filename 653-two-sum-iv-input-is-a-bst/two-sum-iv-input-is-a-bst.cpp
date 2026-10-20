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
    vector<int>vec;
    void ans(TreeNode* root){
        if(!root)return ;
        vec.push_back(root->val);
        ans(root->left);

        ans(root->right);

        return ;
    }
    bool findTarget(TreeNode* root, int k) {
        ans(root);
        int n=vec.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(vec[i]+vec[j]==k){
                    return true;
                }
            }
        }
        return false;
    }
};