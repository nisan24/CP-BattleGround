/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-08 21:40:36
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int numberOfSteps(int num) {
        if (num == 0)
            return 0;
        return 1 + numberOfSteps(num % 2 ? num - 1 : num / 2);
    }
};

// Accepted