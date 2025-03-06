// Scrivi una funzione che prenda una stringa come parametro e restituisca il numero di vocali presenti nella stringa.

function contaVocali(stringa) {
  const vocali = ["a", "e", "i", "o", "u"];
  let conteggio = 0;

  for (let carattere of stringa.toLowerCase()) {
    if (vocali.includes(carattere)) {
      conteggio++;
    }
  }

  return conteggio;
}

const stringa = "Hello World";
const numeroVocali = contaVocali(stringa);

console.log("Numero di vocali:", numeroVocali);
