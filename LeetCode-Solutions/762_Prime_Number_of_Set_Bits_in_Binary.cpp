/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/description/
 *  Problem Name : 762. Prime Number of Set Bits in Binary Representation
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-21 20:29:55
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        static const unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        
        int count = 0;

        for (int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i);
            if (primes.count(bits)) {
                count++;
            }
        }
        return count;
    }
};

// Accepted

