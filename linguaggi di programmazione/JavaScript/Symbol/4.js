// Utilizzare `Symbol.for` per creare e recuperare Symbol globali e `Symbol.keyFor` per ottenere la chiave di un Symbol globale.

const globalSymbol = Symbol.for("globalSymbol");
const sameGlobalSymbol = Symbol.for("globalSymbol");

console.log(globalSymbol === sameGlobalSymbol); // true
console.log(Symbol.keyFor(globalSymbol)); // globalSymbol
