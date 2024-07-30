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
    int  good(TreeNode* root,int m){
        if(root == NULL) return 0;
        int res = 0;
        if(root->val>=m) 
        {res = 1;}
        m = max(m,root->val);
        res = res+good(root->left,m);
        res = res+good(root->right,m);
        return res;
    }
    int goodNodes(TreeNode* root) {
        int ans = good(root,root->val);
        return ans;
    }
};