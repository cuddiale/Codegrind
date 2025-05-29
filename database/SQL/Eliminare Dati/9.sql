-- Rimuovi tutti gli articoli con una categoria che non è né "Elettronica" né "Abbigliamento" dalla tabella Articolo.

DELETE FROM Articolo
WHERE Categoria NOT IN ('Elettronica', 'Abbigliamento');