// Dati tre numeri valutare se: valore1 è maggiore di zero oppure valore2 è minore di venti. Queste condizioni devono verificarsi insieme a valore3 compreso tra 10 e 20.

const valore1 = 5;
const valore2 = 10;
const valore3 = 15;
console.log(
  "Risultato espressione complessa: " +
    ((valore1 > 0 || valore2 < 20) && valore3 >= 10 && valore3 <= 20)
);
