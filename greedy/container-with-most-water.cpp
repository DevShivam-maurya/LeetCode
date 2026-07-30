class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
         int l=0;
         int r=n-1;
          int maxwater = 0;
          while(l<r){
            int width = r-l;
            int minheight = min(height[l] , height[r]);
            int area = width*minheight;

            maxwater = max(area , maxwater);
             if(height[l]<height[r]){
                l++;
             }else{
                r--;
             }
          }
          return maxwater;
    }
};