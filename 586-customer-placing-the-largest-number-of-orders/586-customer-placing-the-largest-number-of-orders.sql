# Write your MySQL query statement below
SELECT customer_number
FROM
(SELECT customer_number, COUNT(order_number) AS order_count FROM Orders GROUP BY customer_number) t1
ORDER BY order_count DESC LIMIT 1