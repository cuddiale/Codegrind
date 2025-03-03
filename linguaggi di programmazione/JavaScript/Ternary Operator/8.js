// Scrivi un codice che prenda un numero e un intervallo come input e verifichi se il numero è compreso nell'intervallo utilizzando l'operatore ternario.

const numero = 15;
const intervalloMinimo = 10;
const intervalloMassimo = 20;
const risultato =
  numero >= intervalloMinimo && numero <= intervalloMassimo
    ? "compreso"
    : "non compreso";
console.log("Il numero è:", risultato);
