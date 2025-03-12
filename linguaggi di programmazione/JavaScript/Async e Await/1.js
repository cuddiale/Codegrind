// Creare una funzione asincrona che attende un certo numero di millisecondi prima di restituire un valore:

async function attesa(ms) {
  await new Promise((resolve) => setTimeout(resolve, ms));
  return "Attendi completato";
}

async function esegui() {
  const risultato = await attesa(2000);
  console.log(risultato);
}

esegui();
