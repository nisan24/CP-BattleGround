/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/power-of-three/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-10 22:27:59
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while(n % 3 == 0){
            n /= 3;
        }
        return n == 1;
    }
};

// Accepted