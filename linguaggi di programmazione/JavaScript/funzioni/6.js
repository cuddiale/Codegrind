// Scrivi una funzione che prenda una parola come parametro e restituisca true se la parola è palindroma, altrimenti restituisca false.

function isParolaPalindroma(parola) {
  const parolaInvertita = parola.split("").reverse().join("");
  return parola === parolaInvertita;
}

const parola = "radar";
const isPalindroma = isParolaPalindroma(parola);

console.log("La parola è palindroma?", isPalindroma);
