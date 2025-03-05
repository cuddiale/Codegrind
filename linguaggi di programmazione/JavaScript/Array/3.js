// Scrivi un programma che prenda un array di numeri e trovi il valore minimo.

const numeri = [10, 5, 8, 15, 3];
let minimo = numeri[0];

for (let numero of numeri) {
  if (numero < minimo) {
    minimo = numero;
  }
}

console.log("Il valore minimo è:", minimo);
