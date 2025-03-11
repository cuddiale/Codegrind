// Simulare una chiamata asincrona utilizzando un setTimeout e un callback:

function chiamataAsincrona(callback) {
  setTimeout(function () {
    callback("Risposta dalla chiamata asincrona");
  }, 2000);
}

function mioCallback(risposta) {
  console.log("Risposta ricevuta:", risposta);
}

chiamataAsincrona(mioCallback);
