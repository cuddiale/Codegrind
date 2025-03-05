// Creare un array contenente le lunghezze delle stringhe di un altro array.

const parole = ["gatto", "cane", "elefante"];
const lunghezze = parole.map((parola) => parola.length);

console.log(lunghezze); // [5, 4, 8]
