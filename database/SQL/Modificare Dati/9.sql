-- Aggiorna il titolo e la categoria dell'articolo con ID 1.

UPDATE Articolo
SET Titolo = 'Nuovo Titolo',
    Categoria = 'Nuova Categoria'
WHERE ID = 1;
