class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;

        for(int i=0;i<nums.size();i++){
            // This condition is to break when we hit the positive number 
            //we need to stop because no further negative number
            if(nums[i] > 0){
                break;
            }

            //skip duplicate starting numbers.(skip second occurances)
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            
            //i is already fixed -> l=i+1
            //we search only on the remaining right side
            int l = i+1, r = nums.size()-1;

            //here after do the two-sum pattern
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];

                if(sum > 0){
                    r--;
                }

                else if(sum < 0){
                    l++;
                }
                
                else{
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;

                    //to skip duplicate values for the l pointer inside the two-pointer loop.
                    while(l < r && nums[l]==nums[l-1]){
                        l++;
                    }
                }
            }

        }

        return res;
    }
};
