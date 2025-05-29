-- Inserisci una nuova prenotazione nella tabella "Prenotazione" con ID 1, IDCliente 1, IDCamera 1 e data di arrivo corrente

INSERT INTO Prenotazione (ID, IDCliente, IDCamera, DataArrivo)
VALUES (1, 1, 1, CURRENT_DATE);
