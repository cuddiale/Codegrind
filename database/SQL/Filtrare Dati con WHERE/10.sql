-- Seleziona il nome, il cognome e la nazionalità degli autori di nazionalità 'Italia' o 'Francia'.

SELECT Nome, Cognome, Nazionalità
FROM Autore
WHERE Nazionalità IN ('Italia', 'Francia');