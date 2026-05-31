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
    TreeNode* ans=NULL;

    int numOfAnc(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==NULL) return 0;

        int left = numOfAnc(root->left,p,q);
        int right = numOfAnc(root->right,p,q);
        int self = 0;
        if(root==p || root==q) self=1;

        int sum = left+right+self;

        if(sum==2 && ans==NULL)
        {
            ans=root;
        }

        return sum;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        numOfAnc(root,p,q);
        return ans;
        
    }
};
