// Creare un generatore che generi numeri interi consecutivi indefinitamente.

function* generaNumeri() {
  let i = 0;
  while (true) {
    yield i++;
  }
}

const generatore = generaNumeri();

console.log(generatore.next().value); // 0
console.log(generatore.next().value); // 1
console.log(generatore.next().value); // 2
// e così via...
