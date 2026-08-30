/* Write your PL/SQL query statement below */
select d.name as Department, e.name as Employee, e.salary
from Employee e
inner join Department d 
on 
e.departmentId=d.id
where e.salary = (select max(e2.salary) from Employee e2
                  where e2.departmentID=e.departmentId);