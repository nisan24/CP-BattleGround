/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/add-strings/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-10-29 23:40:58
 *  Language     : C++
 * -------------------------------------------------
 */


class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';

            result += char((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

// Accepted