// Creare un iteratore infinito che generi numeri interi consecutivi.

const iteratoreInfinito = {
  [Symbol.iterator]: function () {
    let numero = 0;
    return {
      next: () => {
        return { value: numero++, done: false };
      },
    };
  },
};

const iteratore = iteratoreInfinito[Symbol.iterator]();

console.log(iteratore.next().value); // 0
console.log(iteratore.next().value); // 1
console.log(iteratore.next().value); // 2
console.log(iteratore.next().value); // 3
// e così via...
