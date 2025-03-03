// Scrivi un codice che prenda due date come input e calcoli la differenza in giorni tra le due date.

function differenzaInGiorni(data1, data2) {
  const differenza = Math.abs(data2 - data1);
  const millisecondiInUnGiorno = 24 * 60 * 60 * 1000;
  return Math.floor(differenza / millisecondiInUnGiorno);
}

const dataInizio = new Date(2022, 0, 1);
const dataFine = new Date(2022, 0, 10);
const differenzaGiorni = differenzaInGiorni(dataInizio, dataFine);
console.log("Differenza in giorni:", differenzaGiorni);
