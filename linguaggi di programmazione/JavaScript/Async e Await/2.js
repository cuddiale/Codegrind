// Gestire l'errore all'interno di una funzione asincrona utilizzando try/catch:

async function esegui() {
  try {
    const risposta = await fetch("https://api.example.com/dati");
    const dati = await risposta.json();
    console.log(dati);
  } catch (errore) {
    console.log("Errore nel caricamento dei dati", errore);
  }
}

esegui();
