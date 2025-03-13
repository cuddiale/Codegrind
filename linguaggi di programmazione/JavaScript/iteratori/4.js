// Creare un iteratore per un oggetto che restituisca chiavi e valori.

const oggetto = {
  nome: "Mario",
  eta: 30,
  città: "Roma",
  [Symbol.iterator]: function () {
    const chiavi = Object.keys(this);
    let indice = 0;
    return {
      next: () => {
        if (indice < chiavi.length) {
          const chiave = chiavi[indice++];
          return { value: [chiave, this[chiave]], done: false };
        } else {
          return { done: true };
        }
      },
    };
  },
};

const iteratore = oggetto[Symbol.iterator]();

console.log(iteratore.next().value); // ["nome", "Mario"]
console.log(iteratore.next().value); // ["eta", 30]
console.log(iteratore.next().value); // ["città", "Roma"]
console.log(iteratore.next().done); // true
