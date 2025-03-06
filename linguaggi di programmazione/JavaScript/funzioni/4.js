// Scrivi una funzione che prenda un parametro numero e restituisca il suo fattoriale.

function calcolaFattoriale(numero) {
  let fattoriale = 1;

  for (let i = 1; i <= numero; i++) {
    fattoriale *= i;
  }

  return fattoriale;
}

const numero = 5;
const fattoriale = calcolaFattoriale(numero);

console.log("Il fattoriale di", numero, "è:", fattoriale);
