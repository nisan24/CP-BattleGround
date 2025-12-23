/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/baseball-game/description/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-12-23 22:55:40
 *  Language     : C++
 * -------------------------------------------------
 */
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;

        for (auto& s : ops) {

            if (s == "C") {
                st.pop();
            } else if (s == "D") {
                st.push(st.top() * 2);
            } else if (s == "+") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a + b);
            } else {
                st.push(stoi(s));
            }
        }

        int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }
        return total;
    }
};

// Accepted