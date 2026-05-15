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
class BSTIterator {
    private:

    vector<int> val;   // class member
    int index;         // class member
    void inorder(TreeNode* node){
        
        if(node==nullptr){
            return;
        }
        inorder(node->left);
        val.push_back(node->val);
        inorder(node->right);
    }
public:
    BSTIterator(TreeNode* root) {
        inorder(root);
        index=-1;
    }
    
    int next() {
        return val[++index];
    }
    
    bool hasNext() {
        return index+1 < val.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */