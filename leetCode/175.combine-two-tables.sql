--
-- @lc app=leetcode id=175 lang=mysql
--
-- [175] Combine Two Tables
--

-- @lc code=start
# Write your MySQL query statement below

SELECT firstName , lastName , city , state from Person left join Adress on person.personId = adress.personId;
-- @lc code=end
