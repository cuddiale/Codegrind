// Aggiungere una nuova proprietà a un oggetto JSON:

const jsonStringa = '{"nome": "Mario", "cognome": "Rossi", "eta": 30}';
const oggetto = JSON.parse(jsonStringa);
oggetto.professione = "Ingegnere";
const nuovaJsonStringa = JSON.stringify(oggetto);
console.log(nuovaJsonStringa);
