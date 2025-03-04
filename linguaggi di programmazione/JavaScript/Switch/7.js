// Scrivi un programma che prenda un voto numerico da 0 a 100 in input e stampi sulla console il punteggio corrispondente utilizzando l'istruzione switch. Utilizza intervalli per assegnare una lettera di valutazione (A, B, C, D, E) al punteggio.

const punteggio = 85;
let valutazione;

switch (true) {
  case punteggio >= 90:
    valutazione = "A";
    break;
  case punteggio >= 80:
    valutazione = "B";
    break;
  case punteggio >= 70:
    valutazione = "C";
    break;
  case punteggio >= 60:
    valutazione = "D";
    break;
  default:
    valutazione = "E";
}

console.log(`La valutazione per il punteggio ${punteggio} è: ${valutazione}`);
