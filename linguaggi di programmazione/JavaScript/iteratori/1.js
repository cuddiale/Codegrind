// Creare un iteratore semplice che iteri su un array di numeri.

const numeri = [1, 2, 3, 4, 5];

const iteratore = numeri[Symbol.iterator]();

console.log(iteratore.next().value); // 1
console.log(iteratore.next().value); // 2
console.log(iteratore.next().value); // 3
console.log(iteratore.next().value); // 4
console.log(iteratore.next().value); // 5
console.log(iteratore.next().done); // true
