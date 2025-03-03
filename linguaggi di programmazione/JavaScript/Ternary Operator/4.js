// Scrivi un codice che prenda il prezzo originale di un prodotto e lo sconto applicato come input e calcoli il prezzo scontato utilizzando l'operatore ternario.

const prezzoOriginale = 100;
const scontoPercentuale = 20;
const prezzoScontato =
  prezzoOriginale - (prezzoOriginale * scontoPercentuale) / 100;
console.log("Prezzo scontato:", prezzoScontato);
