/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-28 20:35:00
 *  Language     : C++
 * -------------------------------------------------
 */



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int bestProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);

            bestProfit = max(bestProfit, price - minPrice);
        }

        return bestProfit;
    }
};

// Accepted