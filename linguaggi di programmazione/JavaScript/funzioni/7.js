// Scrivi una funzione che prenda un array di numeri come parametro e restituisca la somma di tutti gli elementi.

function calcolaSommaArray(numeri) {
  let somma = 0;

  for (let numero of numeri) {
    somma += numero;
  }

  return somma;
}

const arrayNumeri = [1, 2, 3, 4, 5];
const somma = calcolaSommaArray(arrayNumeri);

console.log("La somma degli elementi dell'array è:", somma);
