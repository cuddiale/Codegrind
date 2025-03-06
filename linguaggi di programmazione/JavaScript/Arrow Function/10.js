// Scrivi una arrow function che prenda due parametri, una parola e una lunghezza, e restituisca true se la parola è più lunga della lunghezza specificata, altrimenti restituisca false.

const isParolaPiuLunga = (parola, lunghezza) => parola.length > lunghezza;

console.log("La parola è più lunga?", isParolaPiuLunga("JavaScript", 5));
