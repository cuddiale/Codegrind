// Utilizzare le promise per caricare dati da una risorsa esterna:

function caricaDati() {
  return new Promise(function (resolve, reject) {
    fetch("https://api.example.com/dati")
      .then(function (response) {
        if (response.ok) {
          resolve(response.json());
        } else {
          reject("Errore nel caricamento dei dati");
        }
      })
      .catch(function (error) {
        reject(error);
      });
  });
}

caricaDati()
  .then(function (dati) {
    console.log(dati);
  })
  .catch(function (errore) {
    console.log(errore);
  });
