/* Write your PL/SQL query statement below */
with cte  as 
(select requester_id  as id from requestaccepted
union all 
select accepter_id as id from requestaccepted),
cte1 as (
    select id ,count(*) as cnt 
    from cte 
    group by id;
)
select id ,cnt as num from  cte1
where cnt=(select max(cnt) from cte1);