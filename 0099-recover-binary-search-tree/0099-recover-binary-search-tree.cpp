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
    TreeNode* fst=nullptr;  //fst violation
    TreeNode* sec=nullptr;   //second violation
    TreeNode* prev=nullptr;  //prev node in inordr traversal

    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }

        //go with left subtree
        inorder(root->left);
        if(prev!=nullptr && root->val < prev->val){
            if(fst==nullptr){
                fst=prev;
              
            }
              sec=root;
        }
        //if not fst violation
        prev=root;

        inorder(root->right);
    }

public:
    void recoverTree(TreeNode* root) {
         inorder(root);
        swap(fst->val,sec->val);
    }
};