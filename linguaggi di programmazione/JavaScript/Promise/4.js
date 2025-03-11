// Gestire il caso in cui una promise venga risolta o rifiutata immediatamente:

const promessa = new Promise(function (resolve, reject) {
  if (Math.random() < 0.5) {
    resolve("Promessa risolta immediatamente");
  } else {
    reject("Promessa rifiutata immediatamente");
  }
});

promessa
  .then(function (risultato) {
    console.log(risultato);
  })
  .catch(function (errore) {
    console.log(errore);
  });
