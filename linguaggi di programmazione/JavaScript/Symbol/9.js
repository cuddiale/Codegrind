// Utilizzare `Symbol.species` per personalizzare la costruzione di sottoclassi di oggetti incorporati.

class MyArray extends Array {
  static get [Symbol.species]() {
    return Array;
  }
}

const arr = new MyArray(1, 2, 3);
const mappedArr = arr.map((x) => x * x);

console.log(mappedArr instanceof MyArray); // false
console.log(mappedArr instanceof Array); // true
