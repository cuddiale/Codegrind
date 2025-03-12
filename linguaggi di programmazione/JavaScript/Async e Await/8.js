// Utilizzare await con una funzione asincrona per ottenere dati da un database fittizio:

async function ottieniDatiDaDatabase() {
  return new Promise(function (resolve, reject) {
    // Simulazione di accesso al database
    setTimeout(function () {
      const dati = { nome: "Mario", cognome: "Rossi" };
      resolve(dati);
    }, 2000);
  });
}

async function esegui() {
  const dati = await ottieniDatiDaDatabase();
  console.log(dati);
}

esegui();
