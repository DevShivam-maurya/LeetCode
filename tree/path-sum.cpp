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
   bool checksum(TreeNode* root, int targetSum , int sum){
    if(!root){
        return false;
    }
    sum += root->val;
    if(root->left==NULL && root->right==NULL){
        return sum == targetSum;
    }

     return checksum(root->left , targetSum , sum) ||
    checksum(root->right , targetSum , sum);
   }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum =  0;

        return checksum(root , targetSum , sum);
    }
};