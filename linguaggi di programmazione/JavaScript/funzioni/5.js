// Scrivi una funzione che generi un numero casuale compreso tra un valore minimo e un valore massimo.

function generaNumeroCasuale(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

const minimo = 1;
const massimo = 10;
const numeroCasuale = generaNumeroCasuale(minimo, massimo);

console.log("Numero casuale:", numeroCasuale);
