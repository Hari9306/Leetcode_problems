/* Write your PL/SQL query statement below */


with cte as (
    select id ,name ,departmentid ,salary,
    dense_rank() over (partition by departmentid order by salary desc)  as rnk
    from  employee 
)
select d.name as Department ,e.name as Employee, e.salary as Salary
from 
cte  e
join 
department d
on e.departmentid=d.id 
where rnk<=3;