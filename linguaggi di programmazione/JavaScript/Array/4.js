// Scrivi un programma che prenda un array di numeri e restituisca un nuovo array contenente solo i numeri pari.

const numeri = [1, 2, 3, 4, 5];
const numeriPari = [];

for (let numero of numeri) {
  if (numero % 2 === 0) {
    numeriPari.push(numero);
  }
}

console.log("Numeri pari:", numeriPari);
