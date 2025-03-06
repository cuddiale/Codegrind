// Scrivi una funzione che prenda un array di numeri come parametro e restituisca un oggetto con le proprietà "massimo" e "minimo" che rappresentano rispettivamente il valore massimo e il valore minimo dell'array.

function calcolaMassimoMinimoArray(numeri) {
  const massimo = Math.max(...numeri);
  const minimo = Math.min(...numeri);

  return {
    massimo,
    minimo,
  };
}

const arrayNumeri = [10, 5, 8, 2, 6];
const risultato = calcolaMassimoMinimoArray(arrayNumeri);

console.log("Massimo:", risultato.massimo);
console.log("Minimo:", risultato.minimo);
