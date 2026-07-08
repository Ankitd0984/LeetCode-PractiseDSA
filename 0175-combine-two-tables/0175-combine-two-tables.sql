# Write your MySQL query statement below
select 
    p.firstName,
    p.lastName,
    a.City,
    a.State
From
    Person p
Left Join
    Address a
ON
    p.personID = a.personID