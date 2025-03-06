// Scrivi una funzione che prenda un parametro numero e restituisca true se il numero è pari, altrimenti restituisca false.

function isNumeroPari(numero) {
  return numero % 2 === 0;
}

const numero = 4;
const isPari = isNumeroPari(numero);

console.log("Il numero è pari?", isPari);
