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
    void inorder(vector<int>& tra,TreeNode* root){
        if(root==NULL) return;
        inorder(tra,root->left);
        tra.push_back(root->val);
        inorder(tra,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return 0;
        vector<int> tra;
        inorder(tra,root);
        return tra[k-1];
    }
};