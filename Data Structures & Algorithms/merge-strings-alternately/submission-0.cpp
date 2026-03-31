class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.size(),word2.size());
        string newstr;

        for(int i=0;i<n;i++){
            newstr += word1[i];
            newstr += word2[i];
        }

        if(n<word1.size()){
            string sub = word1.substr(n);
            newstr += sub;
        }
        if(n<word2.size()){
            string sub = word2.substr(n);
            newstr += sub;
        }

        return newstr;
    }
};