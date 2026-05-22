class Solution {
public:

    bool IsPalindrome(string &s,int l,int r){
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.length()-1;

        while(left < right){

            if(s[left] != s[right]){

                return IsPalindrome(s,left+1,right) ||
                       IsPalindrome(s,left,right-1);
            }

            left++;
            right--;
        }

        return true;
    }
};