# Write your MySQL query statement below
select eu.unique_id as unique_id, e.name as name
from EmployeeUNI eu right join Employees e on eu.id = e.id;