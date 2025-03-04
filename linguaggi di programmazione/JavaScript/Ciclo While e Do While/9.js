// Scrivi un programma che calcoli la somma dei numeri dispari da 1 a 10 utilizzando il ciclo while.

let numero = 1;
let sommaDispari = 0;

while (numero <= 10) {
  if (numero % 2 !== 0) {
    sommaDispari += numero;
  }
  numero++;
}

console.log("La somma dei numeri dispari è:", sommaDispari);
