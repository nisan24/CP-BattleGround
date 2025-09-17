/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-09-17 23:02:38
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
private:
    void backtrack(const string& digits, vector<string>& result, string& current, const vector<string>& pad, int index) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        const string& letters = pad[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);
            backtrack(digits, result, current, pad, index + 1);
            current.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> pad = {
            "", "", "abc", "def", "ghi", "jkl", 
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;
        string current;
        backtrack(digits, result, current, pad, 0);
        return result;
    }
};

// Accepted