class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,r=numbers.size()-1;

        while(i<r){
            int curSum = numbers[i] + numbers[r];

            if(curSum > target){
                r--;
            }
            else if(curSum < target){
                i++;
            }
            else{
                return{i+1,r+1};
            }
        }
        return{};
    }
};
