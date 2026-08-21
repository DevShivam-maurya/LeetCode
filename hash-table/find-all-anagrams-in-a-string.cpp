class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int freqp[26]={0};
        int freqw[26]={0};

        for(char ch:p){
            freqp[ch-'a']++;
        }

        int left=0;
        for(int right=0 ; right<s.size() ; right++){
            freqw[s[right]-'a']++;
            if(right-left+1 > p.size()){
                freqw[s[left] - 'a']--;
                left++;
            }

            if(right-left+1==p.size()){
                bool same=true;
                for(int i=0 ; i<26 ; i++){
                    if(freqp[i]!=freqw[i]){
                        same = false;
                        break;
                    }
                }

                if(same){
                    ans.push_back(left);
                }
            }
        }
        return ans;
    }
};