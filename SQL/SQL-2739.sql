SELECT name, cast(EXTRACT(DAY FROM payday) AS INT)
FROM loan