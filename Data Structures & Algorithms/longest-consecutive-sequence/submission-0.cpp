class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>store(nums.begin(),nums.end());
        int longest = 0;

        for(int num:store){
            if(store.find(num-1)==store.end()){
                int length = 1;
                while(store.find(length+num)!=store.end()){
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};
