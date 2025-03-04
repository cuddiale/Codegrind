// Scrivi un programma che prenda un array di stringhe e le concateni in un'unica stringa.

const parole = ["Ciao", "come", "va?"];
let risultato = "";

for (let parola of parole) {
  risultato += parola + " ";
}

console.log("Risultato:", risultato);
