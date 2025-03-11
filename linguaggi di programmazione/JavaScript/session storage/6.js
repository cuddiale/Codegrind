// Verificare se una chiave esiste nel Session Storage.

sessionStorage.setItem("chiave", "valore");
const esiste = sessionStorage.getItem("chiave") !== null;
console.log(esiste); // true

sessionStorage.removeItem("chiave");
const nonEsiste = sessionStorage.getItem("chiave") === null;
console.log(nonEsiste); // true
