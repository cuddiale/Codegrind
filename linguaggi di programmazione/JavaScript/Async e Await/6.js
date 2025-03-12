// Utilizzare await con una funzione che restituisce una promessa rifiutata:

function promessaRifiutata() {
  return new Promise(function (resolve, reject) {
    reject("Promessa rifiutata");
  });
}

async function esegui() {
  try {
    const risultato = await promessaRifiutata();
    console.log(risultato);
  } catch (errore) {
    console.log(errore);
  }
}

esegui();
