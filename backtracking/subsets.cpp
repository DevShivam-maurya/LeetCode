class Solution {
public:
   void sub(vector<int> &nums , int index , vector<int> &temp ,vector<vector<int>> &ans ){

        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        sub(nums , index+1 , temp , ans);

        temp.pop_back();
        sub(nums , index+1 , temp , ans);
        
    }
     vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> ans;
        vector<int>temp;
        sub(nums , 0 , temp , ans);
        return ans;
     }
    
};