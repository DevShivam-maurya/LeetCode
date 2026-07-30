
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==NULL){
            return 0;
        }

         int lheight = maxDepth(root->left);
         int rheight = maxDepth(root->right);

         return max(lheight , rheight) +1;
        
    }
};