/* Write your PL/SQL query statement below */
select d.name as Department ,e.name as Employee,e.salary as Salary
 from employee e
join 
department d
on e.departmentid=d.id
where (d.name,e.salary)in (select d.name ,max(e.salary) from 
 employee e
join 
department d
on e.departmentid=d.id
group by d.name);