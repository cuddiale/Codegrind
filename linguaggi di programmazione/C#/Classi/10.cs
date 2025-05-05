// Crea un'istanza della classe "Prodotto" e assegna valori alle proprietà "Nome", "Prezzo" e "Quantità". Successivamente, chiama il metodo "CalcolaTotale" per ottenere il costo totale dei prodotti e stampalo a schermo.

Prodotto prodotto = new Prodotto();
prodotto.Nome = "Maglietta";
prodotto.Prezzo = 19.99m;
prodotto.Quantita = 3;
decimal costoTotale = prodotto.CalcolaTotale();
Console.WriteLine("Costo totale: " + costoTotale);
