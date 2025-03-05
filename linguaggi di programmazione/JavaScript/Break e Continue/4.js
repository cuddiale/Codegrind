// Saltare l'iterazione di un ciclo while quando un certo valore viene trovato.

let i = 0;
const numeri = [1, 2, 3, 4, 5];
while (i < numeri.length) {
  if (numeri[i] === 3) {
    i++;
    continue;
  }
  console.log(numeri[i]);
  i++;
}
// Output: 1, 2, 4, 5
