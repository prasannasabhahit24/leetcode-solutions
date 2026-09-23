/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {	
    int findmaxpathsum(TreeNode* &root,int &maxi){
        if(root==nullptr) return 0;

        int ls=max(0,findmaxpathsum(root->left,maxi));
        int rs=max(0,findmaxpathsum(root->right,maxi));
        maxi=max(maxi,ls+rs+root->val);

        return root->val+max(ls,rs);
    }
public:
    int maxPathSum(TreeNode* root) {
        //your code goes here

        int maxi=INT_MIN;
        findmaxpathsum(root,maxi);
        return maxi;
    }
};	