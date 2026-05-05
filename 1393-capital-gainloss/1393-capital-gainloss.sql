/* Write your PL/SQL query statement below */
select stock_name,SUM(
    CASE when operation ='Buy' Then -price
        Else price 
    END
    )  AS capital_gain_loss
From Stocks
Group by stock_name;
