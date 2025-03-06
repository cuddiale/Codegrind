// Creare una funzione che restituisce un array contenente tutti gli argomenti passati.

function creaArray(...argomenti) {
  return argomenti;
}

console.log(creaArray(1, "a", true, null)); // [1, 'a', true, null]
console.log(creaArray("x", "y", "z")); // ['x', 'y', 'z']
