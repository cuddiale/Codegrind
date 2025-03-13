// Creare un iteratore che generi la sequenza di Fibonacci.

const fibonacci = {
  [Symbol.iterator]: function () {
    let [a, b] = [0, 1];
    return {
      next: () => {
        [a, b] = [b, a + b];
        return { value: a, done: false };
      },
    };
  },
};

const iteratore = fibonacci[Symbol.iterator]();

console.log(iteratore.next().value); // 1
console.log(iteratore.next().value); // 1
console.log(iteratore.next().value); // 2
console.log(iteratore.next().value); // 3
console.log(iteratore.next().value); // 5
