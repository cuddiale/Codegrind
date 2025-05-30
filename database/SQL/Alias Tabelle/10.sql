-- Ottieni il nome dei fornitori e il nome dei prodotti che forniscono utilizzando gli alias "f" per la tabella "Fornitore" e "p" per la tabella "Prodotto".

SELECT f.Nome, p.Nome
FROM Fornitore AS f
JOIN Prodotto AS p ON f.ID = p.ID_Fornitore;
