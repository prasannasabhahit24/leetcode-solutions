# Write your MySQL query statement below
SELECT class
FROM COURSES
group by class 
having count(*) >=5;