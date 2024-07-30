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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        queue<TreeNode*> p1;
        queue<TreeNode*> q1;
        p1.push(p);
        q1.push(q);
        while(!p1.empty() && !q1.empty()){
            TreeNode* np = p1.front();
            TreeNode* nq = q1.front();
            p1.pop();
            q1.pop();
            if((np->val!=nq->val)) return false;
            if (np->left && nq->left) {
                p1.push(np->left);
                q1.push(nq->left);
            } else if (np->left || nq->left) {
                return false;
            }

            if (np->right && nq->right) {
                p1.push(np->right);
                q1.push(nq->right);
            } else if (np->right || nq->right) {
                return false;
            }
        }
        return q1.empty() && p1.empty();
    }
};