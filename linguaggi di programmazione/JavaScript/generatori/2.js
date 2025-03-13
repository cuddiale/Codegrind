// Creare un generatore che restituisca i numeri della sequenza di Fibonacci.

function* generaFibonacci() {
  let [a, b] = [0, 1];
  while (true) {
    yield a;
    [a, b] = [b, a + b];
  }
}

const generatore = generaFibonacci();

console.log(generatore.next().value); // 0
console.log(generatore.next().value); // 1
console.log(generatore.next().value); // 1
console.log(generatore.next().value); // 2
console.log(generatore.next().value); // 3
