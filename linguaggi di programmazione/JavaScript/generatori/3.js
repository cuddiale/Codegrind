// Creare un generatore che accetti input esterno utilizzando il metodo `next`.

function* generaConInput() {
  const a = yield "Inserisci primo valore:";
  const b = yield "Inserisci secondo valore:";
  yield a + b;
}

const generatore = generaConInput();

console.log(generatore.next().value); // Inserisci primo valore:
console.log(generatore.next(5).value); // Inserisci secondo valore:
console.log(generatore.next(10).value); // 15
