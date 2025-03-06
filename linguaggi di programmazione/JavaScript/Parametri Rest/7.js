// Creare una funzione che restituisce solo gli argomenti unici passati.

function unici(...argomenti) {
  return [...new Set(argomenti)];
}

console.log(unici(1, 2, 2, 3, 4, 4)); // [1, 2, 3, 4]
console.log(unici("a", "b", "a", "c")); // ['a', 'b', 'c']
