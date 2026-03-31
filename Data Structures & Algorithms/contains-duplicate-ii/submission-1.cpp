class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>kset;
        int l = 0;

        for(int r=0;r<nums.size();r++){
            if(r - l > k){
                kset.erase(nums[l]);
                l++;
            }
            if(kset.find(nums[r]) != kset.end()){
                return true;
            }
            kset.insert(nums[r]);
        }
        return false;
    }
};