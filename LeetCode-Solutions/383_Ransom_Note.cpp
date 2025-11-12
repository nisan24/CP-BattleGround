/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/ransom-note/description/
 *  Problem Name : 383. Ransom Note
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-12 23:08:13
 *  Language     : C++
 * -------------------------------------------------
 */

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        for (char ch : magazine)
            freq[ch - 'a']++;

        for (char ch : ransomNote) {
            if (--freq[ch - 'a'] < 0)
                return false;
        }

        return true;
    }
};

// Accepted