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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        if(root1==NULL && root2==NULL){
            return v;
        }

        queue<TreeNode*>q1;
        queue<TreeNode*>q2;

        q1.push(root1);
        q2.push(root2);

        while(!q1.empty() && root1 !=NULL){
            int s = q1.size();
            for(int i = 0 ; i< s;i++){
                TreeNode* Node= q1.front();
                q1.pop();
                v.push_back(Node->val);
                if(Node->left != NULL) q1.push(Node->left);
                if(Node->right != NULL) q1.push(Node->right);
            }
        }

        while(!q2.empty()  && root2!=NULL){
            int s = q2.size();
            for(int i = 0 ; i< s;i++){
                TreeNode* Node= q2.front();
                q2.pop();
                v.push_back(Node->val);
                if(Node->left != NULL) q2.push(Node->left);
                if(Node->right != NULL) q2.push(Node->right);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};