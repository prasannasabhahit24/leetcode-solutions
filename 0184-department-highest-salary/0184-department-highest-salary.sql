# Write your MySQL query statement below
SELECT d.name AS Department,e.name AS Employee,e.salary AS Salary
FROM Employee e
JOIN Department d  ON e.departmentid=d.id
WHERE (e.salary,e.departmentid) IN (
    SELECT MAX(salary),departmentid
    FROM Employee
    group by departmentid
)
ORDER BY Salary DESC,Employee  ASC;
   
