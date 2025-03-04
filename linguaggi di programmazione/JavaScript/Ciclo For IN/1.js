// Scrivi un programma che stampi sulla console tutte le proprietà di un oggetto.

const persona = {
  nome: "Mario",
  cognome: "Rossi",
  età: 30,
  professione: "Ingegnere",
};

for (let chiave in persona) {
  console.log(chiave + ": " + persona[chiave]);
}
