class Solution {
public:
    int jos(int n, int k) {
        
        if(n==1){
            return 0;
        }
        return (jos(n-1 , k) + k)%n;
    }

    int findTheWinner(int n , int k){
        int ans = jos(n,k) +1;
        return ans;
    }
};