// Stampa sulla console il risultato del confronto tra un numero e una stringa per verificare se sono uguali sia in valore che in tipo.

const numero = 5;
const stringa = "5";
console.log(
  "Il numero e la stringa sono uguali in valore e tipo? " +
    (numero === parseInt(stringa))
); // Convertendo la stringa in intero
console.log(
  "Il numero e la stringa sono uguali in valore e tipo? " + (numero === stringa)
); // Lasciando la stringa come stringa
