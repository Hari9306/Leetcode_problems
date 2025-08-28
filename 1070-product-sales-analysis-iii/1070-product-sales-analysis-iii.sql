-- /* Write your PL/SQL query statement below */
-- select product_id,year as first_year,quantity,price 
-- from sales
-- where (product_id,year)in (select product_id,min(year) from sales
-- group by product_id);
select product_id,year as first_year,quantity,price
from sales s
where year=(select min(year) from sales where product_id=s.product_id);