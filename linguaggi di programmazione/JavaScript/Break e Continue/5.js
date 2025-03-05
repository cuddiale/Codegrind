// Interrompere un ciclo for...of quando un certo valore viene trovato.

const numeri = [1, 2, 3, 4, 5];
for (let numero of numeri) {
  if (numero === 3) {
    break;
  }
  console.log(numero);
}
// Output: 1, 2
