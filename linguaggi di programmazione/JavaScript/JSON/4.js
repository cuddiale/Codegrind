// Modificare i valori di un oggetto JSON:

const jsonStringa = '{"nome": "Mario", "cognome": "Rossi", "eta": 30}';
const oggetto = JSON.parse(jsonStringa);
oggetto.nome = "Luca";
oggetto.cognome = "Verdi";
oggetto.eta = 35;
const nuovaJsonStringa = JSON.stringify(oggetto);
console.log(nuovaJsonStringa);
