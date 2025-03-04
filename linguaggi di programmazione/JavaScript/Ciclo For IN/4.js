// Scrivi un programma che prenda una stringa in input e conti il numero di caratteri presenti.

const stringa = "Hello, world!";
let count = 0;

for (let char in stringa) {
  count++;
}

console.log("Numero di caratteri:", count);
