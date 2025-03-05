// Interrompere un ciclo annidato quando un certo valore viene trovato.

const matrice = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];
for (let riga of matrice) {
  for (let valore of riga) {
    if (valore === 5) {
      break;
    }
    console.log(valore);
  }
}
// Output: 1, 2, 3, 4
