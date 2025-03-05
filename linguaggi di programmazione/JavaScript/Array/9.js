// Scrivi un programma che prenda un array di stringhe e calcoli la lunghezza media delle stringhe presenti.

const array = ["ciao", "salve", "buongiorno", "arrivederci"];
let lunghezzaTotale = 0;

for (let stringa of array) {
  lunghezzaTotale += stringa.length;
}

const lunghezzaMedia = lunghezzaTotale / array.length;

console.log("Lunghezza media delle stringhe:", lunghezzaMedia);
