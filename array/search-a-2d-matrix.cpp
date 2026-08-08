class Solution {
public:
    bool SearchInRow(vector<vector<int>>& mat, int row ,  int target){
        int n = mat[0].size();
        int st = 0;
        int end = n-1;
        while(st<=end){
            int mid = st  + (end - st)/2;
            if(target == mat[row][mid]){
                return true;
            }else if( target < mat[row][mid]){
                end = mid - 1;
            }else {
                st = mid + 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();

        int strow = 0;
        int endrow = m-1;
        while(strow <= endrow){
            int midrow = strow + (endrow - strow)/2;
            if(target >= mat[midrow][0] && target <= mat[midrow][n-1]){
               return  SearchInRow(mat , midrow , target);
           
            }else if( target >=  mat[midrow][n-1]){
                strow = midrow + 1;
            }else{
                endrow = midrow - 1;
            }

        }
        return false;
        
    }
};