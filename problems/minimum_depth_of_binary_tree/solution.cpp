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
    int helper(TreeNode* node){
      if(node ==  NULL){
        return 0;
      }

      int left = helper(node->left);
      int right = helper(node->right);

      if(node->left == NULL && node->right ==NULL ){
        return 1;
      }
      if(node->left == NULL){
        return right+1;
      }
      if(node->right == NULL){
        return left+1;
      }

      return min(left,right) + 1;
    }
    int minDepth(TreeNode* root) {
        return helper(root);
    }
};