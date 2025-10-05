class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> freq(26, INT_MAX);

        for (const string &word : words)
        {
            vector<int> currFreq(26, 0);
            for (char c : word)
            {
                currFreq[c - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                freq[i] = min(freq[i], currFreq[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++)
        {
            result.insert(result.end(), freq[i], string(1, i + 'a'));
        }

        return result;
    }
};

// Accepted
