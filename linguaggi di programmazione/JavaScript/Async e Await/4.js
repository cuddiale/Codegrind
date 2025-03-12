// Utilizzare await con una funzione che restituisce una promessa:

function eseguiChiamata() {
  return new Promise(function (resolve, reject) {
    setTimeout(function () {
      resolve("Chiamata completata");
    }, 2000);
  });
}

async function esegui() {
  const risultato = await eseguiChiamata();
  console.log(risultato);
}

esegui();
