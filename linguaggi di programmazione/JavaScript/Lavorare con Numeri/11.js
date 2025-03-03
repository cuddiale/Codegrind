// Generazione di un numero casuale: Scrivi un programma che generi un numero casuale compreso tra un valore minimo e massimo e lo stampi sulla console.

const minimo = 1;
const massimo = 10;
const numeroCasuale =
  Math.floor(Math.random() * (massimo - minimo + 1)) + minimo;
console.log("Il numero casuale è: " + numeroCasuale);
