/* Write your PL/SQL query statement below */
select c.name as Customers 
from Customers c
left join Orders d
on c.id = d.customerID
where d.customerID is null;