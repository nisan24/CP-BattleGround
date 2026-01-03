/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-03 20:57:09
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++)
            if (isSelfDividing(i))
                ans.push_back(i);

        return ans;
    }

private:
    bool isSelfDividing(int x) {
        int num = x;

        while (num > 0) {
            int d = num % 10;
            if (d == 0 || x % d != 0)
                return false;
            num /= 10;
        }

        return true;
    }
};

// Accepted