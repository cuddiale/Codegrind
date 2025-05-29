-- Inserisci un nuovo ordine nella tabella "Ordine" con ID 1, data corrente e totale di 50.99

INSERT INTO Ordine (ID, Data, Totale)
VALUES (1, CURRENT_DATE, 50.99);
