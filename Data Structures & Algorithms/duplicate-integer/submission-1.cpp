class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>setArr;
        for(int num:nums){
            if(setArr.count(num)){
                return true;
            }
            setArr.insert(num);
        }
        return false;
    }
};