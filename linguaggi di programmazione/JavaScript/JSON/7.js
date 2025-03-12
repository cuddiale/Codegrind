// Iterare su un array di oggetti JSON:

const jsonStringa =
  '[{"nome": "Mario", "cognome": "Rossi"}, {"nome": "Luca", "cognome": "Verdi"}]';
const arrayOggetti = JSON.parse(jsonStringa);
arrayOggetti.forEach(function (oggetto) {
  console.log(oggetto.nome);
  console.log(oggetto.cognome);
});
