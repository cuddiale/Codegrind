// Scrivi un codice che prenda una variabile come input e verifichi se è di tipo stringa o numerica utilizzando l'operatore ternario.

const variabile = "Hello";
const risultato =
  typeof variabile === "string"
    ? "stringa"
    : typeof variabile === "number"
    ? "numerica"
    : "altro tipo";
console.log("La variabile è di tipo:", risultato);
