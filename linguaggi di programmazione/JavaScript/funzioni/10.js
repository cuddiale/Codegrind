// Scrivi una funzione che prenda un array di numeri come parametro e restituisca la media di tutti gli elementi.

function calcolaMediaArray(numeri) {
  const somma = numeri.reduce((acc, curr) => acc + curr, 0);
  const media = somma / numeri.length;
  return media;
}

const arrayNumeri = [4, 6, 8, 2, 5];
const media = calcolaMediaArray(arrayNumeri);

console.log("La media degli elementi dell'array è:", media);
