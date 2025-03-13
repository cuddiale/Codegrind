// Creare un iteratore bidirezionale che possa iterare avanti e indietro su un array.

class IteratoreBidirezionale {
  constructor(array) {
    this.array = array;
    this.indice = 0;
  }

  [Symbol.iterator]() {
    return this;
  }

  next() {
    if (this.indice < this.array.length) {
      return { value: this.array[this.indice++], done: false };
    } else {
      return { done: true };
    }
  }

  previous() {
    if (this.indice > 0) {
      return { value: this.array[--this.indice], done: false };
    } else {
      return { done: true };
    }
  }
}

const array = [1, 2, 3, 4, 5];
const iteratore = new IteratoreBidirezionale(array);

console.log(iteratore.next().value); // 1
console.log(iteratore.next().value); // 2
console.log(iteratore.previous().value); // 2
console.log(iteratore.previous().value); // 1
console.log(iteratore.next().value); // 2
