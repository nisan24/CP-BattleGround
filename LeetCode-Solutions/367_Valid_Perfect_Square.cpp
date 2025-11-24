/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-24 23:28:30
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    bool isPerfectSquare(long long num) {
        if (num < 1) return false;

        long long x = num;
        
        while (x > (num / x)) {
            x = (x + (num / x)) / 2;
        }

        return x * x == num;
    }
};

// Accepted