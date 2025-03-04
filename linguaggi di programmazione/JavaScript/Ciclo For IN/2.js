// Scrivi un programma che calcoli la somma dei valori delle proprietà numeriche di un oggetto.

const spese = {
  cibo: 50,
  trasporti: 30,
  affitto: 500,
  utenze: 100,
};

let totaleSpese = 0;

for (let chiave in spese) {
  if (typeof spese[chiave] === "number") {
    totaleSpese += spese[chiave];
  }
}

console.log("Totale spese:", totaleSpese);
