// Utilizzare il destructuring insieme allo spread operator per separare elementi di un array.

const numeri = [1, 2, 3, 4, 5];
const [primo, secondo, ...resto] = numeri;

console.log(primo); // 1
console.log(secondo); // 2
console.log(resto); // [3, 4, 5]
