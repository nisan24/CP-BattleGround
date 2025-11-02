/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/keyboard-row/description/
 *  Problem Name : Keyboard Row
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-15 22:56:25
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 = {'z','x','c','v','b','n','m'};

        vector<string> result;

        for (const string& word : words) {
            char first = tolower(word[0]);
            unordered_set<char>* targetRow;

            if (row1.count(first)) targetRow = &row1;
            else if (row2.count(first)) targetRow = &row2;
            else targetRow = &row3;

            bool sameRow = true;
            for (char ch : word) {
                if (!targetRow->count(tolower(ch))) {
                    sameRow = false;
                    break;
                }
            }
            if (sameRow)
                result.push_back(word);
        }

        return result;
    }
};

// Accepted
