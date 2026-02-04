/*
 * -------------------------------------------------
 *  Problem Link : 
 *  Problem Name :  
 *  Author       : Nisan Hossain
 *	Created At   : 2025-08-28 22:10:04
 *  Language     : C++
 * -------------------------------------------------
 */

class Solution
{
public:
    string countAndSay(int n)
    {
        string result = "1";

        for (int i = 2; i <= n; i++)
        {
            string temp = "";
            int count = 1;

            for (int j = 1; j < result.size(); j++)
            {
                if (result[j] == result[j - 1])
                {
                    count++;
                }
                else
                {
                    temp += to_string(count);
                    temp += result[j - 1];
                    count = 1;
                }
            }

            temp += to_string(count);
            temp += result.back();

            result = temp;
        }

        return result;
    }
};

// Accepted
