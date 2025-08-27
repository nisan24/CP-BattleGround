#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string entityParser(string text) {
        unordered_map<string, string> entity = {
            {"&quot;", "\""}, {"&apos;", "'"}, {"&amp;", "&"},
            {"&gt;", ">"}, {"&lt;", "<"}, {"&frasl;", "/"}
        };

        string ans = "";
        int n = text.size();
        for (int i = 0; i < n; ++i) {
            if (text[i] == '&') {
                int j = i;
                while (j < n && text[j] != ';' && (j - i) <= 7) { 
                    j++;
                }

                if (j < n && text[j] == ';') {
                    string temp = text.substr(i, j - i + 1);
                    if (entity.count(temp)) {
                        ans += entity[temp];
                        i = j;
                        continue;
                    }
                }
            }
            ans += text[i];
        }

        return ans;
    }
};

// Accepted