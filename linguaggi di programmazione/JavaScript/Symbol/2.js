// Dimostrare che i Symbol sono unici.

const symbol1 = Symbol("test");
const symbol2 = Symbol("test");

console.log(symbol1 === symbol2); // false
