// Scrivi un programma che prenda una stringa, una sottostringa da cercare e una sottostringa da sostituire, utilizzando il metodo replace() e stampi il risultato sulla console.

const stringa = "La mia casa è blu";
const sottostringaDaCercare = "blu";
const sottostringaDaSostituire = "rossa";
const nuovaStringa = stringa.replace(
  sottostringaDaCercare,
  sottostringaDaSostituire
);
console.log("La nuova stringa è: " + nuovaStringa);
