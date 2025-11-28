/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
 *  Problem Name : 121. Best Time to Buy and Sell Stock
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