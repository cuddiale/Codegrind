-- Inserisci un nuovo articolo nella tabella "Articolo" con ID 1, titolo "Introduzione alla Programmazione", contenuto "Questo articolo fornisce una breve introduzione al mondo della programmazione" e data di pubblicazione corrente

INSERT INTO Articolo (ID, Titolo, Contenuto, DataDiPubblicazione)
VALUES (1, 'Introduzione alla Programmazione', 'Questo articolo fornisce una breve introduzione al mondo della programmazione', CURRENT_DATE);
