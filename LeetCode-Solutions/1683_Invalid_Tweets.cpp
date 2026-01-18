/*
 * -------------------------------------------------
 *  Problem Link : https://leetcode.com/problems/invalid-tweets/
 *  Problem Name :  
 *  Author       : Nisan Hossain
 * Created At   : 2026-01-18 22:59:58
 *  Language     : C++
 * -------------------------------------------------
 */



# Write your MySQL query statement below

SELECT tweet_id
FROM Tweets
WHERE CHAR_LENGTH(content) > 15;

# Accepted