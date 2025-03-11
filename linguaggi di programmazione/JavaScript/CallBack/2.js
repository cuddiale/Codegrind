// Definire una funzione che accetta un valore e un callback, e richiama il callback passando il valore come argomento:

function utilizzaCallback(valore, callback) {
  callback(valore);
}

function mioCallback(valore) {
  console.log("Valore ricevuto:", valore);
}

utilizzaCallback(42, mioCallback);
