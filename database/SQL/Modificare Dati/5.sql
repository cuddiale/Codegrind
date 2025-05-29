-- Aggiorna il titolo e l'autore del libro con ID 1.

UPDATE Libro
SET Titolo = 'Nuovo Titolo',
    Autore = 'Nuovo Autore'
WHERE ID = 1;