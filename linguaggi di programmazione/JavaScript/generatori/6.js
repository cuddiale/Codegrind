// Creare un generatore che alterni due valori.

function* generaAlternato() {
  while (true) {
    yield "A";
    yield "B";
  }
}

const generatore = generaAlternato();

console.log(generatore.next().value); // A
console.log(generatore.next().value); // B
console.log(generatore.next().value); // A
console.log(generatore.next().value); // B
