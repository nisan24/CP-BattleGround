/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-28 22:08:11
 *  Language     : C++
 * -------------------------------------------------
 */
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int x : freq)
            if (x)
                return false;

        return true;
    }
};

// Accepted