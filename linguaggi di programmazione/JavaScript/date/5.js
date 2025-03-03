// Scrivi un codice che prenda un numero di mese come input e restituisca il numero di giorni in quel mese.

function numeroGiorniMese(mese) {
  const data = new Date(2023, mese, 0);
  return data.getDate();
}

const meseSpecifico = 2; // Marzo
const numeroGiorni = numeroGiorniMese(meseSpecifico);
console.log("Numero di giorni nel mese:", numeroGiorni);
