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
    TreeNode* fun(vector<int>& preorder,int prestart,int preend,vector<int>& inorder,int instart,int inend,map<int,int> mp){
        if(prestart>preend || instart>inend) return NULL;
        TreeNode* root = new TreeNode(preorder[prestart]);
        int inRoot = mp[preorder[prestart]];
        int numLeft = inRoot-instart;
        root->left = fun(preorder,prestart+1,prestart+numLeft,inorder,instart,inRoot-1,mp);
        root->right = fun(preorder,prestart+numLeft+1,preend,inorder,inRoot+1,inend,mp);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder;
        map<int,int> mp;
        for(int i=0;i<preorder.size();i++){
            inorder.push_back(preorder[i]);
        }
        sort(inorder.begin(),inorder.end());
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        return fun(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
};