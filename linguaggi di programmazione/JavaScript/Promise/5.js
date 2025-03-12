// Utilizzare Promise.all per eseguire più promise contemporaneamente:

const promessa1 = eseguiChiamata(1);
const promessa2 = eseguiChiamata(2);
const promessa3 = eseguiChiamata(3);

Promise.all([promessa1, promessa2, promessa3])
  .then(function (risultati) {
    console.log(risultati);
  })
  .catch(function (errore) {
    console.log(errore);
  });
