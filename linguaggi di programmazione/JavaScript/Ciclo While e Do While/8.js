// Scrivi un programma che prenda una stringa in input e stampi i caratteri della stringa al contrario utilizzando il ciclo while.

let stringa = "Hello, world!";
let lunghezza = stringa.length - 1;

while (lunghezza >= 0) {
  console.log(stringa[lunghezza]);
  lunghezza--;
}
