--  problem linke: https://www.hackerrank.com/challenges/asian-population

SELECT SUM(ci.population) 
FROM CITY ci LEFT JOIN COUNTRY co ON ci.countrycode = co.code 
WHERE co.continent='Asia';