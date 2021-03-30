SELECT pd.name, pv.name
FROM products pd, providers pv
WHERE pv.id = pd.id_providers 
    AND pv.name = 'Ajax SA'