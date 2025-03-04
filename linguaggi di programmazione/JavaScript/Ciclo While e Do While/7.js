// Scrivi un programma che prenda un numero in input e calcoli il suo fattoriale utilizzando il ciclo do...while.

let numero = 5;
let fattoriale = 1;
let i = 1;

do {
  fattoriale *= i;
  i++;
} while (i <= numero);

console.log("Il fattoriale di", numero, "è:", fattoriale);
