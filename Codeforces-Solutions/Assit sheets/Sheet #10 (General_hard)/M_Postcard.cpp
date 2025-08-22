#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool isSubsequence(const string &x, const string &y) {
    int i = 0;
    for (char c : y) {
        if (i < (int)x.size() && x[i] == c) i++;
    }
    return i == (int)x.size();
}

int main() {
    fast_io;

    int q;
    cin >> q;
    while (q--) {
        string s, t, p;
        cin >> s >> t >> p;

        // subsequence check
        if (!isSubsequence(s, t)) {
            cout << "NO\n";
            continue;
        }

        // frequency arrays
        vector<int> have(26, 0), need(26, 0);

        for (char c : s) have[c - 'a']++;
        for (char c : p) have[c - 'a']++;
        for (char c : t) need[c - 'a']++;

        bool ok = true;
        for (int i = 0; i < 26; i++) {
            if (have[i] < need[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
