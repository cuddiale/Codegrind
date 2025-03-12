// Utilizzare Promise.race per ottenere il risultato della promise più veloce:

const promessa1 = new Promise(function (resolve, reject) {
  setTimeout(function () {
    resolve("Promessa 1 risolta");
  }, 2000);
});

const promessa2 = new Promise(function (resolve, reject) {
  setTimeout(function () {
    resolve("Promessa 2 risolta");
  }, 1000);
});

Promise.race([promessa1, promessa2])
  .then(function (risultato) {
    console.log(risultato);
  })
  .catch(function (errore) {
    console.log(errore);
  });
