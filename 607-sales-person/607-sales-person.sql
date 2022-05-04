# Write your MySQL query statement below
SELECT t3.name
FROM Orders t1 INNER JOIN Company t2 ON t1.com_id=t2.com_id AND t2.name="RED" RIGHT JOIN SalesPerson t3 ON t1.sales_id=t3.sales_id
WHERE t1.sales_id IS NULL