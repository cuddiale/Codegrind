-- Aggiorna il nome e l'indirizzo del fornitore con ID 2.

UPDATE Fornitore
SET Nome = 'Nuovo Nome',
    Indirizzo = 'Nuovo Indirizzo'
WHERE ID = 2;
