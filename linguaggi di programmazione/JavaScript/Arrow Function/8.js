// Scrivi una arrow function che prenda due parametri numerici, minimo e massimo, e restituisca un numero casuale compreso tra il valore minimo e il valore massimo.

const generaNumeroCasuale = (minimo, massimo) =>
  Math.floor(Math.random() * (massimo - minimo + 1)) + minimo;

console.log("Numero casuale:", generaNumeroCasuale(1, 10));
