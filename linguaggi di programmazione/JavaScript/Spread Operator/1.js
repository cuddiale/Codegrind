// Creare una copia di un array utilizzando lo spread operator.

const originalArray = [1, 2, 3];
const copiedArray = [...originalArray];

console.log(copiedArray); // [1, 2, 3]
console.log(copiedArray === originalArray); // false
