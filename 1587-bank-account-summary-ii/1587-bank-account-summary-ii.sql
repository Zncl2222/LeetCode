# Write your MySQL query statement below
SELECT name, SUM(amount) AS balance
FROM Users t1 LEFT JOIN Transactions t2 ON t1.account=t2.account
GROUP BY t2.account
HAVING balance>10000