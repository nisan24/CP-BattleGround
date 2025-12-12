/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-12 23:40:59
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0)
            return false;

        while (n % 2 == 0)
            n /= 2;
        while (n % 3 == 0)
            n /= 3;
        while (n % 5 == 0)
            n /= 5;

        if (n == 1)
            return true;
        else
            return false;
    }
};

// Accepted