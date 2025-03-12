// Ordinare un array di oggetti JSON:

const jsonStringa =
  '[{"nome": "Mario", "cognome": "Rossi"}, {"nome": "Luca", "cognome": "Verdi"}]';
const arrayOggetti = JSON.parse(jsonStringa);
arrayOggetti.sort(function (a, b) {
  if (a.nome < b.nome) {
    return -1;
  }
  if (a.nome > b.nome) {
    return 1;
  }
  return 0;
});
console.log(arrayOggetti);
