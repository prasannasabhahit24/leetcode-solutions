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

    // Function to find minimum node in a subtree
    TreeNode* findMin(TreeNode* node) {
        
        while (node->left) {
            node = node->left;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) {
            return nullptr;
        }

        // If key is smaller, search in left subtree
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }

        // If key is greater, search in right subtree
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        // Node found
        else {
            // Case 1: no left child
            if (root->left == nullptr) {
                return root->right;
            }

            // Case 2: no right child
            if (root->right == nullptr) {
                return root->left;
            }

            // Case 3: node has both children
            TreeNode* successor = findMin(root->right);

            // Replace current node value with successor value
            root->val = successor->val;

            // Delete duplicate successor node
            root->right = deleteNode(root->right, successor->val);
        }

        // Return updated root
        return root;
    }
};