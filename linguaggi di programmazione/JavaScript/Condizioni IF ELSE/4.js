// Scrivi un programma che prenda il punteggio di uno studente in input e stampi sulla console il suo livello (A, B, C, D). A parte da 90 punti, B ne richiede minimo 80 e C 70 punti.

const punteggio = 80;

if (punteggio >= 90) {
  console.log("Livello A");
} else if (punteggio >= 80) {
  console.log("Livello B");
} else if (punteggio >= 70) {
  console.log("Livello C");
} else {
  console.log("Livello D");
}
