/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2025-11-11 22:31:13
 *  Language     : C++
 * -------------------------------------------------
 */


#include <vector>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> indexMap;
        vector<string> result;
        int minSum = INT_MAX;

        for (int i = 0; i < list1.size(); i++) {
            indexMap[list1[i]] = i;
        }

        for (int j = 0; j < list2.size(); j++) {
            if (indexMap.count(list2[j])) {
                int sum = j + indexMap[list2[j]];

                if (sum < minSum) {
                    minSum = sum;
                    result = {list2[j]};
                }
                else if (sum == minSum) {
                    result.push_back(list2[j]);
                }
            }
        }

        return result;
    }
};

// Accepted