-- Write your PostgreSQL query statement below
select
d.name as Department,
e.name as Employee,
e.salary as Salary
from (
    select
    name,
    salary,
    departmentId,
    dense_rank() over(
        partition by departmentId
        order by salary desc
    ) as salary_rank
    from Employee
) e
inner join Department d
on e.departmentId = d.id
where e.salary_rank<=3;