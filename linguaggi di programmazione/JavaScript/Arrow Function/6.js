// Scrivi una arrow function che prenda una parola come parametro e restituisca true se la parola è palindroma, altrimenti restituisca false.

const isParolaPalindroma = (parola) => {
  const parolaInvertita = parola.split("").reverse().join("");
  return parola === parolaInvertita;
};

console.log("La parola è palindroma?", isParolaPalindroma("radar"));
