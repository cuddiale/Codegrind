// Scrivi un programma che generi e stampi la sequenza di Fibonacci fino al numero 100 utilizzando il ciclo do while.

let numero1 = 0;
let numero2 = 1;
let risultato = 0;

console.log(numero1);
console.log(numero2);

do {
  risultato = numero1 + numero2;
  console.log(risultato);
  numero1 = numero2;
  numero2 = risultato;
} while (risultato <= 100);
