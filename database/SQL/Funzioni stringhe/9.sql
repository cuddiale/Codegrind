-- Ottieni la descrizione del prodotto con il testo "senza glutine" sostituito da "adatto ai celiaci".

SELECT REPLACE(Descrizione, 'senza glutine', 'adatto ai celiaci') AS DescrizioneModificata
FROM Prodotto;
