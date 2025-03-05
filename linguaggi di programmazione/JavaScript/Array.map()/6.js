// Convertire un array di temperature da Celsius a Fahrenheit.

const celsius = [0, 10, 20, 30];
const fahrenheit = celsius.map((temp) => (temp * 9) / 5 + 32);

console.log(fahrenheit); // [32, 50, 68, 86]
