class Solution {
private:
    int cnt = 0;

    int dfs(TreeNode* root){
        if(root == nullptr) return INT_MIN;

        int l = dfs(root->left);
        int r = dfs(root->right);

        // Check if current node is dominant
        if(root->val >= l && root->val >= r){
            cnt++;
        }
        return max(root->val, max(l, r));
    }

public:
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return cnt;
    }
};