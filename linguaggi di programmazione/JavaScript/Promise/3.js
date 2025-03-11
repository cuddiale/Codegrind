// Eseguire una serie di chiamate asincrone in sequenza utilizzando le promise:

function eseguiChiamata(numero) {
  return new Promise(function (resolve, reject) {
    setTimeout(function () {
      resolve(`Chiamata ${numero} completata`);
    }, 1000);
  });
}

eseguiChiamata(1)
  .then(function (risposta) {
    console.log(risposta);
    return eseguiChiamata(2);
  })
  .then(function (risposta) {
    console.log(risposta);
    return eseguiChiamata(3);
  })
  .then(function (risposta) {
    console.log(risposta);
  })
  .catch(function (errore) {
    console.log(errore);
  });
