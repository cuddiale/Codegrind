// Itera sulle proprietà di un oggetto "persona" e stampa ogni chiave e valore corrispondente in console.

const persona = {
  nome: "Mario",
  eta: 30,
  sesso: "Maschio",
};

for (let chiave in persona) {
  console.log(chiave + ": " + persona[chiave]);
}
