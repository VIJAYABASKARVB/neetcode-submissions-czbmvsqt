class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,res=0,maxf=0;
        vector<int>count(26,0);

        for(int r=0;r<s.size();r++){
            count[s[r] - 'A']++;

            maxf = max(maxf,count[s[r] - 'A']);

            while(r-l+1 - maxf > k){
                count[s[l]-'A']--;
                l++;
            }

            res = max(res,r-l+1);
        }
        return res;
    }
};
