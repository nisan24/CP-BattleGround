/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-10 22:26:53
 *  Language     : C++
 * -------------------------------------------------
 */



#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<string, vector<int>> memo;

    int perform(int x, int y, char op) {
        if (op == '+') return x + y;
        if (op == '-') return x - y;
        if (op == '*') return x * y;
        return 0;
    }

    vector<int> diffWaysToCompute(string exp) {
        if (memo.count(exp)) return memo[exp];

        vector<int> results;
        bool isNumber = true;

        for (int i = 0; i < exp.size(); i++) {
            char ch = exp[i];
            if (!isdigit(ch)) {
                isNumber = false;

                vector<int> left = diffWaysToCompute(exp.substr(0, i));
                vector<int> right = diffWaysToCompute(exp.substr(i + 1));

                for (int a : left) {
                    for (int b : right) {
                        results.push_back(perform(a, b, ch));
                    }
                }
            }
        }

        if (isNumber) results.push_back(stoi(exp));

        return memo[exp] = results;
    }
};

// Accepted