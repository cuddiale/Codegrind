// Creare un generatore che gestisca errori lanciati con il metodo `throw`.

function* generaConErrore() {
  try {
    yield 1;
    yield 2;
    yield 3;
  } catch (e) {
    console.log("Errore catturato:", e.message);
  }
}

const generatore = generaConErrore();

console.log(generatore.next().value); // 1
console.log(generatore.next().value); // 2
console.log(generatore.throw(new Error("Qualcosa è andato storto"))); // Errore catturato: Qualcosa è andato storto
console.log(generatore.next().done); // true
