(SELECT Concat('Podium: ', team)
FROM league
WHERE position <=3)

UNION ALL

(SELECT concat('Demoted: ', team)
FROM league
WHERE position >= 14)

