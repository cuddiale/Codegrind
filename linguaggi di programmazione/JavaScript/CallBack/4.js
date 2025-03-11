// Definire una funzione che accetta un array e un callback, e richiama il callback per ogni elemento dell'array:

function elaboraArray(array, callback) {
  for (let i = 0; i < array.length; i++) {
    callback(array[i]);
  }
}

function mioCallback(elemento) {
  console.log("Elemento:", elemento);
}

const array = [1, 2, 3, 4, 5];
elaboraArray(array, mioCallback);
