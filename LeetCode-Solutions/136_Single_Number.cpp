/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-22 23:01:59
 *  Language     : C++
 * -------------------------------------------------
 */

 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            index = index ^ nums[i];
        }
        return index;
    }
};

// Accepted