// Scrivi un programma che prenda un array con elementi duplicati e restituisca un nuovo array con i duplicati rimossi.

const arrayConDuplicati = [1, 2, 3, 1, 2, 3, 4, 5];
const arraySenzaDuplicati = [];

for (let elemento of arrayConDuplicati) {
  if (!arraySenzaDuplicati.includes(elemento)) {
    arraySenzaDuplicati.push(elemento);
  }
}

console.log("Array senza duplicati:", arraySenzaDuplicati);
