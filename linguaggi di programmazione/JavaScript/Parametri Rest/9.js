// Creare una funzione che restituisce gli argomenti in ordine inverso.

function inverso(...argomenti) {
  return argomenti.reverse();
}

console.log(inverso(1, 2, 3)); // [3, 2, 1]
console.log(inverso("a", "b", "c")); // ['c', 'b', 'a']
