# Write your MySQL query statement below
select Employee.name,Bonus.bonus
From Employee
 left JOIN Bonus
ON Employee.empId=Bonus.empId
where bonus<1000 or bonus iS NULL;