// Stampa sulla console il risultato del confronto tra un numero e una stringa per verificare se sono diversi sia in valore che in tipo.

const numero = 5;
const stringa = "10";
console.log(
  "Il numero e la stringa sono diversi in valore o tipo? " +
    (numero !== parseInt(stringa))
);
