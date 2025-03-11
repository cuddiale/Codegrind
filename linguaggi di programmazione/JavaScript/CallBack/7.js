// Utilizzare un callback per calcolare la somma degli elementi di un array:

const numeri = [1, 2, 3, 4, 5];

function sommaElementi(total, numero) {
  return total + numero;
}

const somma = numeri.reduce(sommaElementi, 0);

console.log("Somma:", somma);
