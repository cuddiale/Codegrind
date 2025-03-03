// Scrivi un codice che prenda una data come input e verifichi se è una data futura rispetto alla data corrente.

function isDataFutura(data) {
  const dataCorrente = new Date();
  return data > dataCorrente;
}

const dataDaVerificare = new Date(2023, 0, 1);
const isFutura = isDataFutura(dataDaVerificare);
console.log("La data è futura?", isFutura);
