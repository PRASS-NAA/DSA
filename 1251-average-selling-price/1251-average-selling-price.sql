# Write your MySQL query statement below
select u.product_id, IFNULL(round(sum(p.price*u.units)/sum(u.units),2),0) as average_price
from UnitsSold u
join Prices p 
on u.product_id = p.product_id and 
u.purchase_date between p.start_date and p.end_date
group by u.product_id;