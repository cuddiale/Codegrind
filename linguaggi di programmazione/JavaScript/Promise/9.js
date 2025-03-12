// Utilizzare le promise per eseguire operazioni asincrone in sequenza:

function operazione1() {
  return new Promise(function (resolve, reject) {
    setTimeout(function () {
      resolve("Operazione 1 completata");
    }, 1000);
  });
}

function operazione2() {
  return new Promise(function (resolve, reject) {
    setTimeout(function () {
      resolve("Operazione 2 completata");
    }, 2000);
  });
}

operazione1()
  .then(function (risultato1) {
    console.log(risultato1);
    return operazione2();
  })
  .then(function (risultato2) {
    console.log(risultato2);
  })
  .catch(function (errore) {
    console.log(errore);
  });
