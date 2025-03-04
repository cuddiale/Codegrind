// Scrivi un programma che prenda un array di numeri e calcoli la somma di tutti gli elementi.

const numeri = [5, 8, 12, 4, 9];
let somma = 0;

for (let numero of numeri) {
  somma += numero;
}

console.log("La somma è:", somma);
