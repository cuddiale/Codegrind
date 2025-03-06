// Creare una funzione che restituisce il tipo di ogni argomento passato.

function tipi(...argomenti) {
  return argomenti.map((argomento) => typeof argomento);
}

console.log(tipi(1, "a", true, {})); // ['number', 'string', 'boolean', 'object']
console.log(tipi(null, undefined, 42)); // ['object', 'undefined', 'number']
