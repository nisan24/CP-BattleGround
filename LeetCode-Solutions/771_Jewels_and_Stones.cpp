/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/jewels-and-stones/description/
 *  Problem Name : 771. Jewels and Stones
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-20 21:56:19
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st(jewels.begin(), jewels.end());
        int count = 0;
        
        for (char s : stones) {
            if (st.count(s)) 
                count++;
        }
        return count;
    }
};

// Accepted