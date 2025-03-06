// Creare una funzione che somma un numero variabile di argomenti.

function somma(...numeri) {
  return numeri.reduce((acc, numero) => acc + numero, 0);
}

console.log(somma(1, 2, 3, 4)); // 10
console.log(somma(5, 10, 15)); // 30
