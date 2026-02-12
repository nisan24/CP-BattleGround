/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *  Problem Name : First Unique Character in a String
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-27 23:12:39
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int firstUniqChar(const string& s) {
        vector<int> freq(26, 0); 

        for (char c : s)
            freq[c - 'a']++;
        
        for (int i = 0; i < s.size(); i++)
            if (freq[s[i] - 'a'] == 1)
                return i;
        
        return -1;
    }
};

// Accepted 

