// Creare una funzione che trova il massimo di un numero variabile di argomenti.

function massimo(...numeri) {
  return Math.max(...numeri);
}

console.log(massimo(1, 2, 3, 4)); // 4
console.log(massimo(10, 20, 5)); // 20
