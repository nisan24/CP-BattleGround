/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/guess-number-higher-or-lower/description/
 *  Problem Name : 374. Guess Number Higher or Lower
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-09 23:02:44
 *  Language     : C++
 * -------------------------------------------------
 */

// =-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int res = guess(mid);

            if (res == 0)
                return mid;
            else if (res < 0)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};

// Accepted
// ,k nk