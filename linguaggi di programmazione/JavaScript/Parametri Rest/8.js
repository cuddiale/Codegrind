// Creare una funzione che accoda elementi a un array esistente.

function accoda(array, ...elementi) {
  return array.concat(elementi);
}

const arr = [1, 2, 3];
console.log(accoda(arr, 4, 5, 6)); // [1, 2, 3, 4, 5, 6]
console.log(accoda(arr, 7, 8)); // [1, 2, 3, 7, 8]
