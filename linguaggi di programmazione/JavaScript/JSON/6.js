// Rimuovere una proprietà da un oggetto JSON:

const jsonStringa = '{"nome": "Mario", "cognome": "Rossi", "eta": 30}';
const oggetto = JSON.parse(jsonStringa);
delete oggetto.eta;
const nuovaJsonStringa = JSON.stringify(oggetto);
console.log(nuovaJsonStringa);
