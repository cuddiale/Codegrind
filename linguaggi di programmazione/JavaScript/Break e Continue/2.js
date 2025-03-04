// Saltare l'iterazione di un ciclo for quando un certo valore viene trovato.

const numeri = [1, 2, 3, 4, 5];
for (let i = 0; i < numeri.length; i++) {
  if (numeri[i] === 3) {
    continue;
  }
  console.log(numeri[i]);
}
// Output: 1, 2, 4, 5
