
class Solution {

public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            swap(curr->left, curr->right);

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }

        return root;
    
    }
};