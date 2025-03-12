// Utilizzare await con una funzione asincrona per ottenere dati da un API:

async function ottieniDati() {
  const risposta = await fetch("https://api.example.com/dati");
  const dati = await risposta.json();
  return dati;
}

ottieniDati()
  .then(function (dati) {
    console.log(dati);
  })
  .catch(function (errore) {
    console.log(errore);
  });
