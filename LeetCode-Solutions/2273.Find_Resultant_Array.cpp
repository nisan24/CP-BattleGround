class Solution
{
public:
    bool fun(string s1, string s2)
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> result;
        result.push_back(words[0]);
        for (int i = 1; i < words.size(); i++)
        {
            if (!fun(words[i], words[i - 1]))
            {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};

// Path: 2273. Find Resultant Array After Removing Anagrams
// Accepted