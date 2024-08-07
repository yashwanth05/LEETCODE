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
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        vector<int> tra;
        inorder(tra,root);
        int i = 0;
        int j = tra.size()-1;
        while(i<j){
            if(tra[i]+tra[j] == k) return true;
            else if(tra[i]+tra[j] > k) j--;
            else if(tra[i]+tra[j] < k) i++;
        }
        return false;
    }
};