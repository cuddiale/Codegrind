// Scrivi un programma che prenda un numero in input e conti il numero di cifre presenti utilizzando il ciclo while.

let numero = 12345;
let conteggioCifre = 0;

while (numero !== 0) {
  numero = Math.floor(numero / 10);
  conteggioCifre++;
}

console.log("Numero di cifre:", conteggioCifre);
