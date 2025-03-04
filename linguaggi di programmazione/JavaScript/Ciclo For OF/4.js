// Scrivi un programma che prenda un array di numeri e stampi solo i numeri pari.

const numeri = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

for (let numero of numeri) {
  if (numero % 2 === 0) {
    console.log(numero);
  }
}
