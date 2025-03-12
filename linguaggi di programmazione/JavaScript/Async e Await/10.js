// Utilizzare await con una funzione asincrona per eseguire operazioni in sequenza:

async function operazione1() {
  return new Promise(function (resolve) {
    setTimeout(function () {
      resolve("Operazione 1 completata");
    }, 1000);
  });
}

async function operazione2() {
  return new Promise(function (resolve) {
    setTimeout(function () {
      resolve("Operazione 2 completata");
    }, 2000);
  });
}

async function esegui() {
  const risultato1 = await operazione1();
  console.log(risultato1);

  const risultato2 = await operazione2();
  console.log(risultato2);
}

esegui();
