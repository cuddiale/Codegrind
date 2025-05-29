-- Seleziona il nome, il cognome e la nazionalità degli autori di nazionalità 'Italia' o 'Francia' ordinati per cognome in ordine alfabetico.

SELECT Nome, Cognome, Nazionalità
FROM Autore
WHERE Nazionalità IN ('Italia', 'Francia')
ORDER BY Cognome;
