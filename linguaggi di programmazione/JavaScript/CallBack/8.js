// Utilizzare un callback per mappare gli elementi di un array a nuovi valori:

const numeri = [1, 2, 3, 4, 5];

function raddoppia(numero) {
  return numero * 2;
}

const numeriRaddoppiati = numeri.map(raddoppia);

console.log(numeriRaddoppiati);
