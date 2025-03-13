// Creare un generatore che restituisca i numeri da 1 a 3.

function* generaNumeri() {
  yield 1;
  yield 2;
  yield 3;
}

const generatore = generaNumeri();

console.log(generatore.next().value); // 1
console.log(generatore.next().value); // 2
console.log(generatore.next().value); // 3
console.log(generatore.next().done); // true
