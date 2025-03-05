// Aggiungere un prefisso a ogni stringa di un array.

const animali = ["gatto", "cane", "elefante"];
const prefisso = "Animale: ";
const descrizioni = animali.map((animale) => prefisso + animale);

console.log(descrizioni); // ["Animale: gatto", "Animale: cane", "Animale: elefante"]
