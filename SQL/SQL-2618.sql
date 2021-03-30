SELECT pd.name, pv.name, c.name
FROM products pd, providers pv, categories c
WHERE pd.id_providers = pv.id 
    AND pd.id_categories = c.id
    AND pv.name = 'Sansul SA'
    AND c.name = 'Imported'