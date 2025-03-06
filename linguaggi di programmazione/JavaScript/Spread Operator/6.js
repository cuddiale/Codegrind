// Aggiungere nuove proprietà a un oggetto esistente utilizzando lo spread operator.

const originalObject = { a: 1, b: 2 };
const newObject = { ...originalObject, c: 3, d: 4 };

console.log(newObject); // { a: 1, b: 2, c: 3, d: 4 }
