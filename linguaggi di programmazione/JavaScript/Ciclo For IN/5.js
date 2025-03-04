// Scrivi un programma che prenda un oggetto in input e stampi sulla console solo le chiavi dell'oggetto.

const studente = {
  nome: "Marco",
  cognome: "Bianchi",
  età: 25,
  corso: "Informatica",
};

for (let chiave in studente) {
  console.log(chiave);
}
