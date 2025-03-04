// Scrivi un programma che prenda un oggetto in input e calcoli il prodotto dei valori delle proprietà numeriche.

const oggetto = {
  a: 2,
  b: 3,
  c: 4,
  d: "test",
};

let prodotto = 1;

for (let chiave in oggetto) {
  if (typeof oggetto[chiave] === "number") {
    prodotto *= oggetto[chiave];
  }
}

console.log("Prodotto:", prodotto);
