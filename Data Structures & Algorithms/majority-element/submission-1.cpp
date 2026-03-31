class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>count_map;

        for(int num:nums){
            if(count_map[num]==n/2){
                return num;
            }
            count_map[num]++;
        }
        return 0;
    }
};