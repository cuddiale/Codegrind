// Scrivi un programma che prenda un numero in input e conti il numero di cifre pari presenti utilizzando il ciclo while.

let numero = 12345;
let conteggioCifrePari = 0;

while (numero !== 0) {
  const cifra = numero % 10;
  if (cifra % 2 === 0) {
    conteggioCifrePari++;
  }
  numero = Math.floor(numero / 10);
}

console.log("Numero di cifre pari:", conteggioCifrePari);
