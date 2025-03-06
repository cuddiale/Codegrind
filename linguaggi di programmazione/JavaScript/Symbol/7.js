// Utilizzare `Symbol.toPrimitive` per personalizzare la conversione di un oggetto in un valore primitivo.

const obj = {
  valore: 100,
  [Symbol.toPrimitive](hint) {
    if (hint === "number") {
      return this.valore;
    }
    return null;
  },
};

console.log(+obj); // 100
console.log(`${obj}`); // null
