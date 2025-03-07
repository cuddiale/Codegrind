// Utilizzare il destructuring per estrarre i valori da un array annidato

const numeri = [1, [2, 3], 4, 5];

// Destructuring di array annidato
const [primo, [secondo, terzo], quarto] = numeri;

console.log(primo); // 1
console.log(secondo); // 2
console.log(terzo); // 3
console.log(quarto); // 4
