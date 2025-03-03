// Scrivi un codice che prenda la data di nascita come input e calcoli l'età corrente.

function calcolaEta(dataNascita) {
  const dataCorrente = new Date();
  const differenzaAnni = dataCorrente.getFullYear() - dataNascita.getFullYear();
  const differenzaMesi = dataCorrente.getMonth() - dataNascita.getMonth();
  const differenzaGiorni = dataCorrente.getDate() - dataNascita.getDate();

  // Controlla se il compleanno è già passato nell'anno corrente
  if (differenzaMesi < 0 || (differenzaMesi === 0 && differenzaGiorni < 0)) {
    return differenzaAnni - 1;
  }

  return differenzaAnni;
}

const dataNascita = new Date(1990, 5, 15);
const eta = calcolaEta(dataNascita);
console.log("Età:", eta);
