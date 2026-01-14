/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-14 22:30:35
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0, second = 0;

        for (int x : nums) {
            if (x > first) {
                second = first;
                first = x;
            } else if (x > second) {
                second = x;
            }
        }

        return (first - 1) * (second - 1);
    }
};

// Accepted