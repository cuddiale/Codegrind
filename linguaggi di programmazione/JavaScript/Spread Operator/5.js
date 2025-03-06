// Aggiungere nuovi elementi a un array esistente utilizzando lo spread operator.

const originalArray = [1, 2, 3];
const newArray = [0, ...originalArray, 4, 5];

console.log(newArray); // [0, 1, 2, 3, 4, 5]
