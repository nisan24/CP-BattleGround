/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/di-string-match/description/
 *  Problem Name : 942. DI String Match
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-06 21:33:30
 *  Language     : C++
 * -------------------------------------------------
 */
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0, high = s.size();
        vector<int> ans;
        ans.reserve(s.size() + 1);

        for (char c : s) {
            if (c == 'I')
                ans.push_back(low++);
            else
                ans.push_back(high--);
        }
        ans.push_back(low);

        return ans;
    }
};

// Accepted