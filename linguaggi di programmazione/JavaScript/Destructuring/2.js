// Utilizzare il destructuring per estrarre il primo e il quarto valore di un array.

const numeri = [1, 2, 3, 4, 5];

// Destructuring con salto degli elementi
const [primo, , , quarto] = numeri;

console.log(primo); // 1
console.log(quarto); // 4
