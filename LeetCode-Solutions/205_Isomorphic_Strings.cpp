/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/isomorphic-strings/?envType=problem-list-v2&envId=string
 *  Problem Name : 205. Isomorphic Strings 
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-29 22:34:36
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> mapS(256, 0), mapT(256, 0);

        for (int i = 0; i < s.size(); i++) {
            if (mapS[s[i]] != mapT[t[i]]) return false;

            mapS[s[i]] = mapT[t[i]] = i + 1;
        }

        return true;
    }
};

// Accepted 

