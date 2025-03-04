// Scrivi un programma che prenda una stringa e conti il numero di vocali presenti.

const stringa = "Hello, world!";
let conteggioVocali = 0;
const vocali = ["a", "e", "i", "o", "u"];

for (let carattere of stringa.toLowerCase()) {
  if (vocali.includes(carattere)) {
    conteggioVocali++;
  }
}

console.log("Numero di vocali:", conteggioVocali);
