// Filtrare un array di oggetti JSON:

const jsonStringa =
  '[{"nome": "Mario", "cognome": "Rossi"}, {"nome": "Luca", "cognome": "Verdi"}]';
const arrayOggetti = JSON.parse(jsonStringa);
const risultatoFiltro = arrayOggetti.filter(function (oggetto) {
  return oggetto.nome === "Mario";
});
console.log(risultatoFiltro);
