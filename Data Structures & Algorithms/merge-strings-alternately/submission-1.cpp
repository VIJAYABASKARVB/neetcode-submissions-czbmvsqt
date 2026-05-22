class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string res;

        for(int i=0; i<m || i<n;i++){
            if(i < n){
                res += word1[i];
            }
            if(i < m){
                res += word2[i];
            }
        }

        return res;
    }
};