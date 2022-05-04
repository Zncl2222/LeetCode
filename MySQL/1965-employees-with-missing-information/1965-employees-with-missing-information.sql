# Write your MySQL query statement below
(SELECT employee_id
FROM Employees t1 LEFT JOIN Salaries t2
USING(employee_id)
WHERE t2.salary IS NULL)
UNION
(SELECT employee_id
FROM Employees t1 RIGHT JOIN Salaries t2
USING(employee_id)
WHERE t1.name IS NULL)
ORDER BY employee_id ASC