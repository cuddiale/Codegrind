// Scrivi un programma che prenda un numero in input e verifichi se è un numero primo utilizzando il ciclo do while.

let numero = 17;
let divisore = 2;
let primo = true;

do {
  if (numero % divisore === 0) {
    primo = false;
    break;
  }
  divisore++;
} while (divisore < numero);

if (primo) {
  console.log(numero, "è un numero primo.");
} else {
  console.log(numero, "non è un numero primo.");
}
