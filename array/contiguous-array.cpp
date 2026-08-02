class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     
      int  n = nums.size();
      unordered_map<int , int >mp;
      int currsum=0;
      mp[0]=-1;
      int maxlength = 0;
      for(int i=0 ; i<n ; i++){
        if(nums[i]==0){
            currsum += (-1);
        }else{
            currsum += 1;
        }

        if(mp.find(currsum)!= mp.end()){
             maxlength = max(maxlength , i-mp[currsum]);
        }else{
            mp[currsum] = i;
        }

      }
      return maxlength;
        
    }
};