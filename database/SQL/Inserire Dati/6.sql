-- Inserisci un nuovo impiegato nella tabella "Impiegato" con ID 1, nome "Marco", cognome "Bianchi" e data di assunzione corrente

INSERT INTO Impiegato (ID, Nome, Cognome, DataDiAssunzione)
VALUES (1, 'Marco', 'Bianchi', CURRENT_DATE);
