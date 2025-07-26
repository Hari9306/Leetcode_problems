/* Write your PL/SQL query statement below */
SELECT c.name  as Customers from
Customers c left join Orders o
ON c.id=o.customerId
WHERE customerid IS NULL;