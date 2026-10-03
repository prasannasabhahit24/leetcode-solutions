# Write your MySQL query statement below
SELECT  
    employee_id,
    CASE 
       WHEN MOD(employee_id,2)=1 AND name not like 'M%' THEN salary
       else 0
    end as bonus
FROM Employees
order by employee_id;
    