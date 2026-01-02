/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-02 21:13:41
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for (auto &row : image) {
            int l = 0, r = row.size() - 1;

            while (l <= r) {
                int leftVal = row[l] ^ 1;
                int rightVal = row[r] ^ 1;

                row[l] = rightVal;
                row[r] = leftVal;

                l++;
                r--;
            }
        }

        return image;
    }
};

// Accepted