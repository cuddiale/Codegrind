// Creare un Symbol e utilizzarlo come chiave di una proprietà di un oggetto.

const mySymbol = Symbol("mySymbol");
const obj = {
  [mySymbol]: "valore associato al simbolo",
};

console.log(obj[mySymbol]); // valore associato al simbolo
