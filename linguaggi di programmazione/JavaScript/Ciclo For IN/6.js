// Scrivi un programma che prenda un oggetto in input e stampi solo le proprietà di tipo stringa.

const persona = {
  nome: "Anna",
  cognome: "Verdi",
  età: 30,
  professione: "Insegnante",
};

for (let chiave in persona) {
  if (typeof persona[chiave] === "string") {
    console.log(chiave + ": " + persona[chiave]);
  }
}
