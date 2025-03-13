// Creare un generatore che restituisca i numeri da 1 a 5 utilizzando un loop.

function* generaNumeri() {
  for (let i = 1; i <= 5; i++) {
    yield i;
  }
}

const generatore = generaNumeri();

for (let valore of generatore) {
  console.log(valore); // 1 2 3 4 5
}
