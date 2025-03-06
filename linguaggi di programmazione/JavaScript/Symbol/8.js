// Utilizzare `Symbol.toStringTag` per personalizzare il risultato di `Object.prototype.toString`.

const myObject = {
  [Symbol.toStringTag]: "MyCustomObject",
};

console.log(Object.prototype.toString.call(myObject)); // [object MyCustomObject]
