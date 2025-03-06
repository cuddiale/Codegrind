// Creare una funzione che calcola la media di un numero variabile di argomenti.

function media(...numeri) {
  const totale = numeri.reduce((acc, numero) => acc + numero, 0);
  return totale / numeri.length;
}

console.log(media(1, 2, 3, 4)); // 2.5
console.log(media(10, 20, 30)); // 20
