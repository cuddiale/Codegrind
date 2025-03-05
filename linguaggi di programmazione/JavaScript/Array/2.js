// Scrivi un programma che prenda un array di numeri e trovi il valore massimo.

const numeri = [10, 5, 8, 15, 3];
let massimo = numeri[0];

for (let numero of numeri) {
  if (numero > massimo) {
    massimo = numero;
  }
}

console.log("Il valore massimo è:", massimo);
