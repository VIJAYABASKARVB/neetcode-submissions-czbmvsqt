class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>mpp;
        for(auto it:nums){
            if(mpp.find(it) != mpp.end()){
                return true;
            }
            mpp.insert(it);
        }
        return false;
    }
};