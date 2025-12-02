/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/binary-watch/description/
 *  Problem Name : 401. Binary Watch
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-08 23:15:36
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;

        for (int hour = 0; hour < 12; hour++) {
            for (int minute = 0; minute < 60; minute++) {
                if (__builtin_popcount(hour) + __builtin_popcount(minute) ==
                    turnedOn) {
                    result.push_back(to_string(hour) + ":" +
                                     (minute < 10 ? "0" : "") +
                                     to_string(minute));
                }
            }
        }
        return result;
    }
};

// Accepted
