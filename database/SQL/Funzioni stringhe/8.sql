-- Ottieni la posizione della lettera "o" nella descrizione di ogni prodotto.

SELECT LOCATE('o', Descrizione) AS PosizioneO
FROM Prodotto;