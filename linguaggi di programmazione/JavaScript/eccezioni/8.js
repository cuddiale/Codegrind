// Creare una funzione che logga le eccezioni in un array per un successivo debugging.

const logErrori = [];

function loggaEccezione(eccezione) {
  logErrori.push(eccezione.message);
}

function operazione(dato) {
  try {
    if (dato < 0) {
      throw new Error("Dato negativo non permesso");
    }
    console.log("Dato processato:", dato);
  } catch (e) {
    console.error(e.message);
    loggaEccezione(e);
  }
}

operazione(10); // Dato processato: 10
operazione(-1); // Dato negativo non permesso

console.log(logErrori); // ["Dato negativo non permesso"]
