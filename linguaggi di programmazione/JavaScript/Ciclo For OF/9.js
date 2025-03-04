// Scrivi un programma che prenda un array di numeri e calcoli la media di tutti gli elementi.

const numeri = [5, 8, 12, 4, 9];
let somma = 0;

for (let numero of numeri) {
  somma += numero;
}

const media = somma / numeri.length;
console.log("La media è:", media);
