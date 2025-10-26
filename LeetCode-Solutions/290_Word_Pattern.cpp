/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/word-pattern/description/?envType=problem-list-v2&envId=string
 *  Problem Name : 290. Word Pattern
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-29 23:11:18
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, int> charMap;
        unordered_map<string, int> wordMap;
        istringstream in(s);
        string word;
        int i = 0;

        for (; in >> word; i++)
        {
            if (i == pattern.size())
                return false;

            if (charMap[pattern[i]] != wordMap[word])
                return false;

            charMap[pattern[i]] = wordMap[word] = i + 1;
        }

        return i == pattern.size();
    }
};

// Accepted
