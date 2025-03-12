// Creare un iteratore personalizzato per un oggetto.

const oggetto = {
  valore1: "A",
  valore2: "B",
  valore3: "C",
  [Symbol.iterator]: function () {
    const valori = Object.values(this);
    let indice = 0;
    return {
      next: function () {
        if (indice < valori.length) {
          return { value: valori[indice++], done: false };
        } else {
          return { done: true };
        }
      },
    };
  },
};

const iteratore = oggetto[Symbol.iterator]();

console.log(iteratore.next().value); // A
console.log(iteratore.next().value); // B
console.log(iteratore.next().value); // C
console.log(iteratore.next().done); // true
