// Creare una funzione che filtra solo i numeri pari da un numero variabile di argomenti.

function filtraPari(...numeri) {
  return numeri.filter((numero) => numero % 2 === 0);
}

console.log(filtraPari(1, 2, 3, 4, 5)); // [2, 4]
console.log(filtraPari(10, 15, 20, 25)); // [10, 20]
