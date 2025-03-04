// Scrivi un programma che prenda una stringa e crei una nuova stringa invertendo l'ordine dei caratteri.

const stringa = "Hello, world!";
let stringaInvertita = "";

for (let carattere of stringa) {
  stringaInvertita = carattere + stringaInvertita;
}

console.log("Stringa invertita:", stringaInvertita);
