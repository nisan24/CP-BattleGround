/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        if (x < 0)
        {
            return false;
        }
        long long reversed = 0;
        while(x){
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return reversed == y;
        
    }
};
// @lc code=end

