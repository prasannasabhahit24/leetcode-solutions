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
    private:
    vector<int>solve(TreeNode* root,int &ans){
        if(root==nullptr){
            return {INT_MAX,INT_MIN,0};
        }

        //solve rleft and right sub tree
        vector<int> left=solve(root->left,ans);
        vector<int> right=solve(root->right,ans);

        //check BST  condition left[0]=min value n left side,left[1]=max.value,left[2]=size left tree & simliar ro right size
        if(root->val>left[1] && root->val < right[0]){
            //update current size
            int curr=left[2]+right[2]+root->val;

            ans=max(ans,curr);
            return {
                min(root->val,left[0]),
                max(root->val,right[1]),
                curr
            };
        }
       return {INT_MIN, INT_MAX, 0};
        

    }
public:
    int maxSumBST(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};