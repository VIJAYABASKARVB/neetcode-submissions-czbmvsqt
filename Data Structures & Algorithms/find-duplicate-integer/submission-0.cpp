class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>seenSet;
        for(int num : nums){
            if(seenSet.count(num)){
                return num;
            }
            seenSet.insert(num);
        }
        return 0;
    }
};
