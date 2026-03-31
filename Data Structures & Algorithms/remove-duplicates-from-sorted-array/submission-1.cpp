class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), i = 0, j = 0;
        while (j < n) {
            nums[i] = nums[j];
            while (j < n && nums[j] == nums[i]) {
                j++;
            }
            i++;
        }
        return i;
    }
};