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
    unordered_map<int,int>inorderidx;
    int postidx;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postidx=postorder.size()-1;
        int n=inorder.size();
        for(int i=0;i<n;i++){
            inorderidx[inorder[i]]=i;
        }
        return helper(inorder,postorder,0,inorder.size()-1);
    }
    TreeNode* helper(vector<int>& inorder,vector<int>& postorder,int left,int right){
        if(left>right)return nullptr;

        int rootval=postorder[postidx--];
        TreeNode* root=new TreeNode(rootval);
        int inidx=inorderidx[rootval];
        root->right=helper(inorder,postorder,inidx+1,right);
        root->left=helper(inorder,postorder,left,inidx-1);
        

        return root;

    }
};