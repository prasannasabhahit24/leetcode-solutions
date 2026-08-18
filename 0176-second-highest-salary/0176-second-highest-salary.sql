# Write your MySQL query statement below
select Max(salary) as SecondHighestSalary
FROM Employee
WHERE salary < ( select Max(salary)  FROM Employee);