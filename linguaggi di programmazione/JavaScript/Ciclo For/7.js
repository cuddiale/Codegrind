// Scrivi un programma che calcoli la media di un array di numeri utilizzando un ciclo for.

const numeri = [5, 8, 12, 4, 9];
let somma = 0;

for (let i = 0; i < numeri.length; i++) {
  somma += numeri[i];
}

const media = somma / numeri.length;
console.log("La media è:", media);
