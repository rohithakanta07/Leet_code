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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue< TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            while(s>0){
                TreeNode* t = q.front();
                v.push_back(t->val);
                q.pop();
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
                s--;
            }
            ans.push_back(v);
        }
        return ans;
    }
};