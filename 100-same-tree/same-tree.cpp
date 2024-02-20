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

    void same(TreeNode* p1, TreeNode* q1 ,int &flag)
    {   
         if(p1==NULL and q1==NULL) return;
        if((p1 == NULL && q1 != NULL) || (p1 != NULL && q1 == NULL))
        {
            flag = 0 ;
            return ;
        }
        if(p1-> val != q1-> val)
        {
            flag = 0 ; 
            return ;
        }
       
        // else{
        //     re
        // }
        same(p1->left,q1->left,flag);
        same(p1->right,q1->right,flag);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        TreeNode* p1 = p;
        TreeNode* q1 = q;
        int flag=1;
        same(p,q,flag);
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
    }
};