/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
  public:

    string serialize(TreeNode* root) {
        if(root==nullptr){
            return "";
        }

        stringstream ss; //it is like 1,2,3,#,.......
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();

            //if node is nullptr
            if(curr==nullptr){
                ss<<"#,";
            }

            else {
             ss<<curr->val<<",";

             q.push(curr->left);
             q.push(curr->right);
            }
        }

        return ss.str();

    }

    TreeNode* deserialize(string data) {
        if(data.empty()){
            return nullptr;
        }

        stringstream s(data);

        string str;
        getline(s,str,',');

        TreeNode* root=new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            //read vallue of leftchild from serialised data
            getline(s,str,',');

            if(str!="#"){
                TreeNode* lefti=new TreeNode(stoi(str));
                node->left=lefti;
                q.push(lefti);
            }

            //read value from rigth child
            getline(s,str,',');
            if(str!="#"){
                TreeNode* ritee=new TreeNode(stoi(str));
                node->right=ritee;
                q.push(ritee);
            }
        }
        return root;
    }
    static void inorder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));