// Combinare due oggetti con proprietà sovrascritte utilizzando lo spread operator.

const object1 = { a: 1, b: 2 };
const object2 = { b: 3, c: 4 };
const combinedObject = { ...object1, ...object2 };

console.log(combinedObject); // { a: 1, b: 3, c: 4 }
