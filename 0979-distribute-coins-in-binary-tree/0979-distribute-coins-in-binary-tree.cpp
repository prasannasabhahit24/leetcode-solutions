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
    int solve(TreeNode* currnode,TreeNode* parent){
        if(currnode== nullptr){
            return 0;
        }

      int moves=solve(currnode->left,currnode)+solve(currnode->right,currnode);
      int from=currnode->val-1;
      parent->val+=from;
      moves+=abs(from);

      return moves;
    }
public:
    int distributeCoins(TreeNode* root) {
        TreeNode temp;
        return solve(root,&temp);
    }
};