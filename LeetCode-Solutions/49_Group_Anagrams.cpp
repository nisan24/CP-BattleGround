/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-19 23:05:05
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        mp.reserve(strs.size());

        for (auto& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(move(s));
        }

        vector<vector<string>> result;
        result.reserve(mp.size());

        for (auto& [key, group] : mp) {
            result.push_back(move(group));
        }

        return result;
    }
};

// Accepted