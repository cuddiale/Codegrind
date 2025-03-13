// Creare un generatore che restituisca oggetti con proprietà incrementali.

function* generaOggetti() {
  let id = 1;
  while (true) {
    yield { id: id++, nome: `Oggetto ${id}` };
  }
}

const generatore = generaOggetti();

console.log(generatore.next().value); // { id: 1, nome: 'Oggetto 2' }
console.log(generatore.next().value); // { id: 2, nome: 'Oggetto 3' }
console.log(generatore.next().value); // { id: 3, nome: 'Oggetto 4' }
