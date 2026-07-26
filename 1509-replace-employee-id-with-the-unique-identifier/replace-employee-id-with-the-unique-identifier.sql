-- Write your PostgreSQL query statement below
select
s.unique_id,
e.name
from Employees e
left join EmployeeUNI s
on s.id = e.id