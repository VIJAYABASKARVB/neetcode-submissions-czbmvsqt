class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>store;

        for(auto s:strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            store[temp].push_back(s);
        }

        vector<vector<string>> results;
        for(auto it:store){
            results.push_back(it.second);
        }

        return results;
    }
};
