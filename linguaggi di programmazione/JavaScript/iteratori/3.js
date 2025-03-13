// Utilizzare un iteratore per iterare su ogni carattere di una stringa.

const stringa = "Hello";

const iteratore = stringa[Symbol.iterator]();

console.log(iteratore.next().value); // H
console.log(iteratore.next().value); // e
console.log(iteratore.next().value); // l
console.log(iteratore.next().value); // l
console.log(iteratore.next().value); // o
console.log(iteratore.next().done); // true
