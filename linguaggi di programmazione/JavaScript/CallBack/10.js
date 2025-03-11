// Utilizzare un callback per simulare la gestione degli errori in una finta chiamata asincrona:

function eseguiChiamata(callbackSuccesso, callbackErrore) {
  // Simulazione di una chiamata asincrona
  const esito = Math.random() < 0.5;

  if (esito) {
    callbackSuccesso("Chiamata riuscita");
  } else {
    callbackErrore("Errore durante la chiamata");
  }
}

function callbackSuccesso(risposta) {
  console.log("Successo:", risposta);
}

function callbackErrore(errore) {
  console.error("Errore:", errore);
}

eseguiChiamata(callbackSuccesso, callbackErrore);
