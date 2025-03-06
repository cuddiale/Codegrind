// Utilizzare lo spread operator per passare elementi di un array come parametri di una funzione.

function somma(a, b, c) {
  return a + b + c;
}

const numeri = [1, 2, 3];
console.log(somma(...numeri)); // 6
