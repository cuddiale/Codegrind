// Accedere ai valori di un oggetto JSON:

const jsonStringa = '{"nome": "Mario", "cognome": "Rossi", "eta": 30}';
const oggetto = JSON.parse(jsonStringa);
console.log(oggetto.nome);
console.log(oggetto.cognome);
console.log(oggetto.eta);
