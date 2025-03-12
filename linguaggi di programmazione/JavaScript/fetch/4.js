// Eseguire una richiesta DELETE per eliminare dati da un'API:

fetch("https://api.example.com/dati/1", {
  method: "DELETE",
})
  .then((response) => response.json())
  .then((data) => console.log(data))
  .catch((error) => console.log("Errore nella richiesta", error));
