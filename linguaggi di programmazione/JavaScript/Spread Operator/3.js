// Creare una copia di un oggetto utilizzando lo spread operator

const originalObject = { a: 1, b: 2 };
const copiedObject = { ...originalObject };

console.log(copiedObject); // { a: 1, b: 2 }
console.log(copiedObject === originalObject); // false
