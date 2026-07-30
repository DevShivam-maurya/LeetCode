
class Solution {
public:
      int maxsum;
    int solve(TreeNode* root) {
        if(root==NULL)
            return 0;

            int l = solve(root->left);
            int r = solve(root->right);

            int koi_ek_aacha = max(l,r) +root->val;
            int only_root_acha = root->val;
            int neeche_se_ans_mil_gya = l + r + root->val;

            maxsum = max({maxsum ,koi_ek_aacha ,only_root_acha,neeche_se_ans_mil_gya});

            return max(only_root_acha , koi_ek_aacha);
        
    } 
    int maxPathSum(TreeNode* root) {
        maxsum = INT_MIN;
        solve(root);
        return maxsum;
    }
};