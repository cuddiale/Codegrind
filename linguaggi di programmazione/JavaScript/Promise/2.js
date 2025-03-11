// Creare una promise che viene rifiutata dopo 3 secondi:

const promessa = new Promise(function (resolve, reject) {
  setTimeout(function () {
    reject("Promessa rifiutata");
  }, 3000);
});

promessa.catch(function (errore) {
  console.log(errore);
});
