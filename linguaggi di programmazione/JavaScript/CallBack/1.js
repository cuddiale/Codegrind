// Definire una funzione che accetta un callback e lo richiama:

function eseguiCallback(callback) {
  callback();
}

function mioCallback() {
  console.log("Eseguo il callback!");
}

eseguiCallback(mioCallback);
