/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/majority-element/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-19 23:33:50
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        
        for (int num : nums) {
            if (count == 0) 
                candidate = num;

            // if (num == candidate) count++;
            // else count--;
            count += (num == candidate) ? 1 : -1;
        }
        
        return candidate;
    }
};

// Accepted