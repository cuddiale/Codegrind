// Utilizzare un callback per filtrare gli elementi di un array:

const numeri = [1, 2, 3, 4, 5];

function filtraPari(numero) {
  return numero % 2 === 0;
}

const numeriPari = numeri.filter(filtraPari);

console.log(numeriPari);
