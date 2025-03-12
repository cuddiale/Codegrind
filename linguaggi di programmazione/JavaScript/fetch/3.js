// Eseguire una richiesta PUT per aggiornare dati su un'API:

const datiAggiornati = {
  nome: "Luca",
  cognome: "Verdi",
};

fetch("https://api.example.com/dati/1", {
  method: "PUT",
  headers: {
    "Content-Type": "application/json",
  },
  body: JSON.stringify(datiAggiornati),
})
  .then((response) => response.json())
  .then((data) => console.log(data))
  .catch((error) => console.log("Errore nella richiesta", error));
