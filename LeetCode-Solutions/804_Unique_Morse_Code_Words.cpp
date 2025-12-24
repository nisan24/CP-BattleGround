/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/unique-morse-code-words/description/
 *  Problem Name : 804. Unique Morse Code Words
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-24 23:33:02
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // Small letter character er jonno Morse code er map/array
        const string morse_code[] = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
            "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
            "..-","...-",".--","-..-","-.--","--.."
        };

        // Unique transformation gulo rakhar jonno set
        unordered_set<string> result_set;

        // Proti ti word er jonno loop
        for (const string& word : words) {
            string current_morse = "";
            
            // Word er character gulo ke morse code e convert korar loop
            for (char c : word) {
                current_morse += morse_code[c - 'a'];
            }
            
            // Set e insert (Duplicate thakle set auto bad diye dibe)
            result_set.insert(current_morse);
        }

        // Set er size e hobe unique result
        return result_set.size();
    }
};

// Accepted