SELECT pd.name
FROM products pd, providers pv
WHERE pd.id_providers = pv.id
    AND pd.amount BETWEEN 10 AND 20
    AND pv.name LIKE 'P%'
