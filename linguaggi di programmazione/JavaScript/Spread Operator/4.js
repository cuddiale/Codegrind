// Unire due oggetti in un nuovo oggetto utilizzando lo spread operator.

const object1 = { a: 1, b: 2 };
const object2 = { c: 3, d: 4 };
const combinedObject = { ...object1, ...object2 };

console.log(combinedObject); // { a: 1, b: 2, c: 3, d: 4 }
