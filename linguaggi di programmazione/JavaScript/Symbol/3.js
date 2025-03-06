// Aggiungere un Symbol come chiave di un oggetto e iterare sull'oggetto.

const mySymbol = Symbol("mySymbol");
const obj = {
  [mySymbol]: "valore associato al simbolo",
  normale: "valore normale",
};

for (let key in obj) {
  console.log(key); // normale
}

console.log(Object.getOwnPropertySymbols(obj)); // [ Symbol(mySymbol) ]
