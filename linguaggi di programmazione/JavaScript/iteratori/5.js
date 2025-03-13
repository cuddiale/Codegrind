// Creare un iteratore per una collezione di oggetti che restituisca uno alla volta.

const collezione = {
  oggetti: [{ id: 1 }, { id: 2 }, { id: 3 }],
  [Symbol.iterator]: function () {
    let indice = 0;
    return {
      next: () => {
        if (indice < this.oggetti.length) {
          return { value: this.oggetti[indice++], done: false };
        } else {
          return { done: true };
        }
      },
    };
  },
};

const iteratore = collezione[Symbol.iterator]();

console.log(iteratore.next().value); // { id: 1 }
console.log(iteratore.next().value); // { id: 2 }
console.log(iteratore.next().value); // { id: 3 }
console.log(iteratore.next().done); // true
