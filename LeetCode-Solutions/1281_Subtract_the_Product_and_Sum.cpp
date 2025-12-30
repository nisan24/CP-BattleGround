/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-30 22:07:16
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prod = 1;

        while (n) {
            int d = n % 10;
            sum += d;
            prod *= d;
            n /= 10;
        }
        return prod - sum;
    }
};

// Accepted