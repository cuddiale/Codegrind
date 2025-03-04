// Scrivi un programma che prenda due oggetti in input e stampi sulla console le proprietà che sono presenti in entrambi gli oggetti.

const oggetto1 = {
  nome: "Mario",
  età: 30,
  professione: "Ingegnere",
};

const oggetto2 = {
  nome: "Mario",
  hobby: "Pittura",
  professione: "Artista",
};

for (let chiave in oggetto1) {
  if (oggetto1.hasOwnProperty(chiave) && oggetto2.hasOwnProperty(chiave)) {
    console.log(chiave);
  }
}
